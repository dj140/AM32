/*
 * IO.c
 *
 *  Created on: Sep. 26, 2020
 *      Author: Alka
 */

#include "targets.h"
#include "signal.h"
#include  "IO.h"
#include "dshot.h"
#include "serial_telemetry.h"
#include "functions.h"
#include "sounds.h"
#include "common.h"

int max_servo_deviation = 250;
int servorawinput;
uint16_t smallestnumber = 20000;
uint8_t enter_calibration_count = 0;
uint8_t calibration_required = 0;
uint8_t high_calibration_counts = 0;
uint8_t high_calibration_set = 0;
uint16_t last_high_threshold = 0;
uint8_t low_calibration_counts = 0;
uint16_t last_input = 0;
char output_timer_prescaler;
uint8_t buffersize = 32;
uint32_t average_signal_pulse;
uint32_t transfer = 0;

void computeMSInput(){

	int lastnumber = dma_buffer[0];
	for ( int j = 1 ; j < 2; j++){

		if(((dma_buffer[j] - lastnumber) < 1500) && ((dma_buffer[j] - lastnumber) > 0)){ // blank space

			newinput = map((dma_buffer[j] - lastnumber),243,1200, 0, 2000);
			break;
		}
		lastnumber = dma_buffer[j];
	}
}


void computeServoInput(){

		if(((dma_buffer[1] - dma_buffer[0]) >800 ) && ((dma_buffer[1] - dma_buffer[0]) < 2200)){
		if(calibration_required){
			if(!high_calibration_set){
			if(high_calibration_counts == 0){
				last_high_threshold = dma_buffer[1] - dma_buffer[0];
			}
			high_calibration_counts ++;
			if(getAbsDif(last_high_threshold, servo_high_threshold) > 50){
				calibration_required = 0;
			}else{
			servo_high_threshold = ((7* servo_high_threshold + (dma_buffer[1] - dma_buffer[0])) >> 3);
			if(high_calibration_counts > 50){
				servo_high_threshold =  servo_high_threshold - 25;
				eepromBuffer[33] = (servo_high_threshold - 1750)/2;
				high_calibration_set = 1;
				playDefaultTone();
			}
			}
			last_high_threshold = servo_high_threshold;
			}
			if(high_calibration_set){
				if(dma_buffer[1] - dma_buffer[0] < 1250){
				low_calibration_counts ++;
				servo_low_threshold = ((7*servo_low_threshold + (dma_buffer[1] - dma_buffer[0])) >> 3);
				}
				if(low_calibration_counts > 75){
					servo_low_threshold = servo_low_threshold + 25;
					eepromBuffer[32] = (servo_low_threshold - 750)/2;
				calibration_required = 0;
				saveEEpromSettings();
				low_calibration_counts = 0;
				playChangedTone();
				}
			}
			signaltimeout = 0;
		}else{
			if(bi_direction){
				if(dma_buffer[1] - dma_buffer[0] <= servo_neutral){
				servorawinput = map((dma_buffer[1] - dma_buffer[0]), servo_low_threshold, servo_neutral, 0, 1000);
				}else{
				servorawinput = map((dma_buffer[1] - dma_buffer[0]), servo_neutral+1, servo_high_threshold, 1001, 2000);
				}
			}else{
			servorawinput = map((dma_buffer[1] - dma_buffer[0]), servo_low_threshold, servo_high_threshold, 47, 2047);
			if(servorawinput == 47){
				servorawinput = 0;
			}
			}
			signaltimeout = 0;
		}
		}else{
			zero_input_count = 0;      // reset if out of range
		}

	if (servorawinput - newinput > max_servo_deviation){
		newinput += max_servo_deviation;
	}else if(newinput - servorawinput > max_servo_deviation){
		newinput -= max_servo_deviation;
	}else{
		newinput = servorawinput;
	}

}

void transfercomplete(){
	if(armed && dshot_telemetry){
	    if(out_put){
     	receiveDshotDma();
      compute_dshot_flag = 2;
	   	return;
	    }else{
      sendDshotDma();
      compute_dshot_flag = 1;
	    return;
	    }
	}
	  if (inputSet == 0){
	 	 detectInput();
	 	receiveDshotDma();
	 return;
	  }
	if (inputSet == 1){

if(dshot_telemetry){
    if(out_put){
    make_dshot_package(e_com_time);          
  	computeDshotDMA();             
  	receiveDshotDma();             
   	return;
    }else{
		sendDshotDma();
    return;
    }
}else{

		if (dshot == 1){
			computeDshotDMA();
			if(send_telemetry){
            // done in 10khz routine
			}
			receiveDshotDma();
		}
		if  (servoPwm == 1){
			computeServoInput();
		 // setup rising pin trigger.
     	    setInputPolarityRising();
			receiveDshotDma();
		    enableHalfTransferInt();
		}

	}
if(!armed){
	if (adjusted_input < 0){
		adjusted_input = 0;
		}
	 if (adjusted_input == 0 && calibration_required == 0){                       // note this in input..not newinput so it will be adjusted be main loop
	 	zero_input_count++;
	 		}else{
	 	zero_input_count = 0;
	 	if(adjusted_input > 1500){
	 		if(getAbsDif(adjusted_input, last_input) > 50){
	 			enter_calibration_count = 0;
	 		}else{
	 			enter_calibration_count++;
	 		}

	 		if(enter_calibration_count >50 && (!high_calibration_set)){
				playBeaconTune3();
	 			calibration_required = 1;
	 			enter_calibration_count = 0;
	 		}
	 		last_input = adjusted_input;
	 	}
	 	}
	}
	}
}


	void checkDshot(){
	if ((smallestnumber > 1)&&(smallestnumber <= 4)&& (average_signal_pulse < 60)) {
		ic_timer_prescaler= 0;
		if(CPU_FREQUENCY_MHZ > 100){
		output_timer_prescaler=1;
		}else{
		output_timer_prescaler=0;
	    }
	//	dshot_runout_timer = 1000;
		dshot = 1;
		buffer_padding = 12;
		buffersize = 32;
		inputSet = 1;
	}
	if ((smallestnumber > 4 )&&(smallestnumber <= 8)&& (average_signal_pulse < 100)){
		dshot = 1;
		ic_timer_prescaler=1;
		if(CPU_FREQUENCY_MHZ > 100){
        output_timer_prescaler=3;
		}else{
		output_timer_prescaler=1;
	    }
    //    dshot_runout_timer = 800;
	//	TIMER_CNT(IC_TIMER_REGISTER) = 0xffff;
		buffer_padding = 7;
		buffersize = 32;
		inputSet = 1;
	}
}
void checkServo(){
		if (smallestnumber > 200 && smallestnumber < 20000){
			servoPwm = 1;
			ic_timer_prescaler=CPU_FREQUENCY_MHZ-1;
			buffersize = 2;
			inputSet = 1;
		}
	}

void detectInput(){
	smallestnumber = 20000;
	average_signal_pulse = 0;
	int lastnumber = dma_buffer[0];
	for ( int j = 1 ; j < 31; j++){
	if(dma_buffer[j] - lastnumber > 0 ){
		if((dma_buffer[j] - lastnumber) < smallestnumber){
		smallestnumber = dma_buffer[j] - lastnumber;
	}
	average_signal_pulse += (dma_buffer[j] - lastnumber);
	}
		lastnumber = dma_buffer[j];
	}
	average_signal_pulse = average_signal_pulse/32 ;


if(dshot == 1){
 checkDshot();
}
if(servoPwm == 1){
 checkServo();
}

if(!dshot && !servoPwm){
	checkDshot();
	checkServo();
}

}
