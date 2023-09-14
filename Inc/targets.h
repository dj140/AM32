

#ifndef USE_MAKE
//#define F031_DEV
//#define FD6288_F051
//#define IFLIGHT
//#define MP6531
//#define TMOTOR55     // like iflight but with leds
//#define TMOTOR45
//#define HGLRC
//#define SISKIN
//#define MAMBA_F50PRO
//#define WRAITH32
//#define AIKON20X20
//#define AIKONSINGLE
//#define FLYCOLOR
//#define HKMICRO
//#define AM32REF_F051
//#define BLPWR
//#define HVFLYCOLOR
//#define AM32REF_F051

//#define G072ESC
//#define G071ENABLE
//#define G071_OPEN_DRAIN
//#define G071_OPEN_DRAIN_B
//#define GEN_64K_G071
//define  DT120_G071


//#define WRAITH32_F421
//#define GD32DEV
//#define GD32DEV_B
//#define GD32SKYSTARS20
//#define GD32SKYSTARS25
//#define GD32SKYSTARS30
//#define GD32SKYSTARS40
#endif

//GLOBAL
//#define USE_ADC_INPUT
//#define USE_ALKAS_DEBUG_LED


#ifdef GD32DEV_A_E230
#define FIRMWARE_NAME           "GD32 Dev A  "
#define FILE_NAME               "GD32DEV_A_E230"
#define DEAD_TIME               40
#define HARDWARE_GROUP_GD_A
#define PA6_VOLTAGE
#define USE_SERIAL_TELEMETRY
#endif

#ifdef SKYSTARS_AM60_E230
#define FIRMWARE_NAME           "Skystars 60A"
#define FILE_NAME               "SKYSTARS_AM60_E230"
#define DEAD_TIME               30
#define HARDWARE_GROUP_GD_A
#define PA6_VOLTAGE
#define USE_SERIAL_TELEMETRY
#endif

#ifdef SKYSTARS_AM45_E230
#define FIRMWARE_NAME           "Skystars 45A"
#define FILE_NAME               "SKYSTARS_AM45_E230"
#define DEAD_TIME               30
#define HARDWARE_GROUP_GD_A
#define USE_SERIAL_TELEMETRY
#endif

#ifdef RHINO40A_E230
#define FIRMWARE_NAME           "RHINO40A E23"
#define FILE_NAME               "RHINO40A_E230"
#define DEAD_TIME               50
#define HARDWARE_GROUP_GD_A
#define PA6_VOLTAGE
#define USE_SERIAL_TELEMETRY
#define LED_ON_PA15
#endif

#ifdef CM_MINI_E230
#define FIRMWARE_NAME           "CM_MINI_E230"
#define FILE_NAME               "CM Mini V3  "
#define DEAD_TIME               50
#define HARDWARE_GROUP_GD_A
#define PA6_VOLTAGE
#define USE_SERIAL_TELEMETRY
#define LED_ON_PA15
#define SLOW_RAMP_DOWN
#endif


#ifdef GD32DEV_B_E230
#define FIRMWARE_NAME           "GD32Pb4 B   "
#define FILE_NAME               "GD32DEV_B_E230"
#define DEAD_TIME               50
#define HARDWARE_GROUP_GD_B
#define USE_SERIAL_TELEMETRY
#endif


#ifdef  SKYSTARS_KM55_E230
#define FIRMWARE_NAME           "KM55A BUTTER"
#define FILE_NAME               "SKYSTARS_KM55_E230"
#define DEAD_TIME               30
#define HARDWARE_GROUP_GD_A
#define USE_SERIAL_TELEMETRY
#endif


/*********************************************************************AT32F421 targets*********************************************/

#ifdef  SWAP_PB0_PA7_F421
#define FIRMWARE_NAME           "SWAP PB0 PA7"
#define FILE_NAME                "SWAP_PB0_PA7"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_045
#define HARDWARE_GROUP_AT_F
#define USE_SERIAL_TELEMETRY
#define USE_PA14_TELEMETRY
#define PA6_NTC_ONLY
#endif

#ifdef  F4A_AIO_F421
#define FIRMWARE_NAME           "F4A AIO     "
#define FILE_NAME                "F4A_AIO_F421"
#define DEAD_TIME               25
#define HARDWARE_GROUP_AT_540
#define HARDWARE_GROUP_AT_F
//#define USE_SERIAL_TELEMETRY
//#define USE_PA14_TELEMETRY
//#define PA6_NTC_ONLY
#endif

#ifdef  F4A_4IN1_F421
#define FIRMWARE_NAME           "F4A 4in1    "
#define FILE_NAME                "F4A_4IN1_F421"
#define DEAD_TIME               45
#define HARDWARE_GROUP_AT_540
#define HARDWARE_GROUP_AT_E
#define USE_SERIAL_TELEMETRY
#define USE_PA14_TELEMETRY
#define PA6_NTC_ONLY
#endif

#ifdef  F4A_SINGLE_F421
#define FIRMWARE_NAME           "F4A Single  "
#define FILE_NAME                "F4A_SINGLE_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_540
#define HARDWARE_GROUP_AT_E
#define USE_SERIAL_TELEMETRY
#define USE_PA14_TELEMETRY
#define PA6_NTC_ONLY
#endif

#ifdef  F4A_EXTCOMP_F421
#define FIRMWARE_NAME           "F4A Ext Comp"
#define FILE_NAME                "F4A_EXTCOMP_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_045
#define HARDWARE_GROUP_AT_E
#define USE_SERIAL_TELEMETRY
#endif


#ifdef AT32DEV_F421
#define FIRMWARE_NAME           "AT32PB4     "
#define FILE_NAME                "AT32DEV_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef FLASHHOBBY_F421
#define FIRMWARE_NAME           "FH F421     "
#define FILE_NAME                "FLASHHOBBY_F421"
#define DEAD_TIME               40
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  DAKEFPV_F421
#define FIRMWARE_NAME           "DakeFpv F4  "
#define FILE_NAME                "DAKEFPV_F421"
#define DEAD_TIME               50
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#define ADC_CHANNEL_CURRENT  ADC_CHANNEL_6
#define ADC_CHANNEL_VOLTAGE  ADC_CHANNEL_3
#define ADC_CHANNEL_TEMP     ADC_CHANNEL_2
#endif

#ifdef  NEUTRON_2_6S_AIO_F421
#define FIRMWARE_NAME           "Neutron AIO"
#define FILE_NAME                "NEUTRON_2_6S_AIO"
#define DEAD_TIME               40
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif


#ifdef DARWIN_F421
#define FIRMWARE_NAME           "DARWIN F421 "
#define FILE_NAME                "DARWIN_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_245          // pa2
#define USE_SERIAL_TELEMETRY
#endif


#ifdef AT32SLOTCAR_F421
#define FIRMWARE_NAME           "AT32_SC     "
#define FILE_NAME                "AT32SLOTCAR_F421"
#define DEAD_TIME               180
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#endif
/****************************************Generic********************************************/

#ifdef  AT32F421_PB4_054
#define FIRMWARE_NAME           "AT32PB4_054 "
#define FILE_NAME               "AT32F421_PB4_054"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_054
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  AT32F421_PB4_405
#define FIRMWARE_NAME           "AT32PB4_405 "
#define FILE_NAME               "AT32F421_PB4_405"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_405
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  AT32F421_PB4_540
#define FIRMWARE_NAME           "AT32PB4_540 "
#define FILE_NAME               "AT32F421_PB4_540"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_540
#define USE_SERIAL_TELEMETRY
#endif





/***************************************End Generic *****************************************/

#ifdef TEKKO32_F421
#define FIRMWARE_NAME           "Tekko32 F4  "
#define FILE_NAME                "TEKKO32_F421"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef HAKRC_G_F421                                     
#define FIRMWARE_NAME           "HAKRC F4 G  "
#define FILE_NAME                "HAKRC_G_F421"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_450
#define USE_SERIAL_TELEMETRY

#endif

#ifdef HAKRC_G23_F421                                     
#define FIRMWARE_NAME           "HAKRC F4 G23"
#define FILE_NAME                "HAKRC_G23_F421"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_450
#define USE_SERIAL_TELEMETRY
#define MILLIVOLT_PER_AMP          45
#define CURRENT_OFFSET            505          // mv
#define USE_NTC
#define USE_LED_STRIP
#define WS2812_PIN GPIO_PINS_7
#define ADC_CHANNEL_CURRENT  ADC_CHANNEL_3
#define ADC_CHANNEL_VOLTAGE  ADC_CHANNEL_2
#define ADC_CHANNEL_TEMP     ADC_CHANNEL_6
#endif

#ifdef HAKRC_K_F421                                     
#define FIRMWARE_NAME           "HAKRC F4 K  "
#define FILE_NAME               "HAKRC_K_F421"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_504
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  FOXEER_F421
#define HARDWARE_GROUP_AT_C
#define FIRMWARE_NAME           "FOXEER F4   "
#define FILE_NAME                "FOXEER_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_540
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  NEUTRON_1_2S_AIO_F421
#define FIRMWARE_NAME           "Neutron Mini"
#define FILE_NAME                "NEUTRON_1_2S_AIO_F421"
#define DEAD_TIME               140
#define HARDWARE_GROUP_AT_045
#define HARDWARE_GROUP_AT_C
#define USE_INVERTED_HIGH
#endif

#ifdef  WRAITH32_F421
#define FIRMWARE_NAME           "WRAITH32_F4 "
#define FILE_NAME                "WRAITH32_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_045
#define HARDWARE_GROUP_AT_C
#define USE_SERIAL_TELEMETRY
#define TARGET_VOLTAGE_DIVIDER  	 74
#define MILLIVOLT_PER_AMP          45
#define CURRENT_OFFSET            526          // mv
#define TARGET_STALL_PROTECTION_INTERVAL 9000
#endif

#ifdef  AIKON_55A_F421
#define FIRMWARE_NAME           "AIKON F4 55A"
#define FILE_NAME                "AIKON_55A_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_C
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  AIKON_SINGLE_F421
#define FIRMWARE_NAME           "AIKON S F4  "
#define FILE_NAME                "AIKON_SINGLE_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef AT32DEV_F415
#define FIRMWARE_NAME           "AT32F415    "
#define FILE_NAME               "AT32DEV_F415"
#define DEAD_TIME               80
#define HARDWARE_GROUP_AT_D
#define USE_SERIAL_TELEMETRY
#endif

#ifdef DAKEFPV_35A_F415
#define FIRMWARE_NAME           "DakeFPV 35A "
#define FILE_NAME               "DAKEFPV_35A_F415"
#define DEAD_TIME               20
#define HARDWARE_GROUP_AT_D
#define USE_SERIAL_TELEMETRY
#endif

#ifdef TEKKO32_F415
#define FIRMWARE_NAME           "Tekko32 F4  "
#define FILE_NAME               "TEKKO32_F415"
#define DEAD_TIME               100
#define HARDWARE_GROUP_AT_D
#define USE_SERIAL_TELEMETRY
#endif

#ifdef PIONEER_50A_F421
#define FIRMWARE_NAME           "Pioneer 50A "
#define FILE_NAME                "PIONEER_50A_F421"
#define DEAD_TIME               60
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef PIONEER_35A_F421
#define FIRMWARE_NAME           "Pioneer 35A "
#define FILE_NAME                "PIONEER_35A_F421"
#define DEAD_TIME               40
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

#ifdef PIONEER_25A_F421
#define FIRMWARE_NAME           "Pioneer 25A "
#define FILE_NAME                "PIONEER_25A_F421"
#define DEAD_TIME               40
#define HARDWARE_GROUP_AT_B
#define HARDWARE_GROUP_AT_045
#define USE_SERIAL_TELEMETRY
#endif

/*****************************************************AT32F415 targets ************************************************/


#ifdef FD6288_F051
#define FILE_NAME				"FD6288_F051"
#define FIRMWARE_NAME           "FD6288_PA2  "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_A
#define TARGET_VOLTAGE_DIVIDER  65
#define USE_SERIAL_TELEMETRY
#endif

#ifdef IFLIGHT_F051
#define FILE_NAME				"IFLIGHT_F051"
#define FIRMWARE_NAME           "IFlight_50A "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_B
#define USE_SERIAL_TELEMETRY
//#define USE_RGB_LED
#endif

#ifdef MP6531_F051
#define FILE_NAME				"MP6531_F051"
#define FIRMWARE_NAME           "Mp6531_Dev  "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_C
#define USE_SERIAL_TELEMETRY
#endif

#ifdef RAZOR32_F051
#define FILE_NAME				"RAZOR32_F051"
#define FIRMWARE_NAME           "Razor32     "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_C
#define USE_SERIAL_TELEMETRY
#define USE_PA14_TELEMETRY
#endif

#ifdef TMOTOR55_F051
#define FILE_NAME				"TMOTOR55_F051"
#define FIRMWARE_NAME           "T-MOTOR 55A "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_B
#define USE_SERIAL_TELEMETRY
#endif

#ifdef TMOTOR45_F051
#define FILE_NAME				"TMOTOR45_F051"
#define FIRMWARE_NAME           "T-MOTOR 45A "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_C
#define USE_SERIAL_TELEMETRY
#endif

#ifdef HGLRC_F051
#define FILE_NAME				"HGLRC_F051"
#define FIRMWARE_NAME           "HGLRC_60A   "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_A
#define USE_SERIAL_TELEMETRY
#endif

#ifdef SISKIN_F051
#define FILE_NAME				"SISKIN_F051"
#define FIRMWARE_NAME           "SISKIN_PA2  "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_A
#define USE_SERIAL_TELEMETRY
#endif

#ifdef DIATONE_F051
#define FILE_NAME				"DIATONE_F051"
#define FIRMWARE_NAME           "DIATONE GEN "
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_F
#define USE_SERIAL_TELEMETRY
#endif

#ifdef MAMBA_F40PRO_F051
#define FILE_NAME				"MAMBA_F40PRO_F051"
#define FIRMWARE_NAME           "MAMBA F40PRO"
#define DEAD_TIME               20
#define HARDWARE_GROUP_F0_F
#define USE_SERIAL_TELEMETRY
#endif

#ifdef MAMBA_F50PRO_F051
#define FILE_NAME				"MAMBA_F50PRO_F051"
#define FIRMWARE_NAME           "MAMBA F50PRO"
#define DEAD_TIME               14
#define HARDWARE_GROUP_F0_F
#define USE_SERIAL_TELEMETRY
#endif

#ifdef MAMBA_F60PRO_F051
#define FILE_NAME				"MAMBA_F60PRO_F051"
#define FIRMWARE_NAME           "MAMBA F60PRO"
#define DEAD_TIME               20
#define HARDWARE_GROUP_F0_F
#define USE_SERIAL_TELEMETRY
#endif

#ifdef WRAITH32V1_F051
#define FILE_NAME				"WRAITH32V1_F051"
#define FIRMWARE_NAME           "Wraith_32 V1"
#define DEAD_TIME               45
#define TARGET_VOLTAGE_DIVIDER  75
#define HARDWARE_GROUP_F0_C
#define USE_SERIAL_TELEMETRY
#endif

#ifdef WRAITH32V2_F051
#define FILE_NAME				"WRAITH32V2_F051"
#define FIRMWARE_NAME           "Wraith_32 V2"
#define DEAD_TIME               60
#define TARGET_VOLTAGE_DIVIDER  75
#define MILLIVOLT_PER_AMP       50
#define CURRENT_OFFSET          600   // millivolts
#define HARDWARE_GROUP_F0_C
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  AIKON20X20_F051
#define FILE_NAME				"AIKON20X20_F051"
#define FIRMWARE_NAME           "Aikon 20x20 "
#define DEAD_TIME               40
#define HARDWARE_GROUP_F0_C
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  AIKONSINGLE_F051
#define FILE_NAME				"AIKONSINGLE_F051"
#define FIRMWARE_NAME           "Aikon AK32  "
#define DEAD_TIME               40
#define HARDWARE_GROUP_F0_B
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  CRTEENSY_HILARIESC_F051
#define FILE_NAME				"CRTEENSY_HILARIESC_F051"
#define FIRMWARE_NAME           "cr hilariesc"
#define DEAD_TIME               40
#define HARDWARE_GROUP_F0_G
//#define USE_SERIAL_TELEMETRY
#endif

#ifdef FLYCOLOR_F051
#define FILE_NAME				"FLYCOLOR_F051"
#define FIRMWARE_NAME           "Flycolor Gen"
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_A
#define USE_SERIAL_TELEMETRY
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_6
#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_6
#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_3
#define CURRENT_ADC_PIN     LL_GPIO_PIN_3
#endif

#ifdef HVFLYCOLOR_F051
#define FILE_NAME				"HVFLYCOLOR_F051"
#define FIRMWARE_NAME           "FLYCOLOR HV "
#define DEAD_TIME               70
#define HARDWARE_GROUP_F0_H
#define USE_SERIAL_TELEMETRY
#endif

#ifdef SKYSTARS_F051
#define FILE_NAME				"SKYSTARS_F051"
#define FIRMWARE_NAME           "SkyStars K55"
#define DEAD_TIME               40
#define HARDWARE_GROUP_F0_B
#define USE_SERIAL_TELEMETRY
#endif


#ifdef BLPWR_F051
#define FILE_NAME				"BLPWR_F051"
#define FIRMWARE_NAME           "BlPwr-ESC"
#define DEAD_TIME               20
#define HARDWARE_GROUP_F0_A
#define MILLIVOLT_PER_AMP       20
#define CURRENT_OFFSET          0
#define TARGET_VOLTAGE_DIVIDER  110
#define USE_SERIAL_TELEMETRY
#endif

#ifdef NEUTRONRC_F051
#define FILE_NAME				"NEUTRONRC_F051"
#define FIRMWARE_NAME           "NeutronRC F0"
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_B
#define MILLIVOLT_PER_AMP       33
#define CURRENT_OFFSET          0
#define TARGET_VOLTAGE_DIVIDER  210
#define USE_SERIAL_TELEMETRY
#define USE_RGB_LED
#endif

#ifdef  AM32REF_F051
//#define LOOP_FREQUENCY_HZ 10000
#define FILE_NAME				"AM32REF_F051"
#define FIRMWARE_NAME           "AM32 Ref-ESC"
#define DEAD_TIME               45
#define HARDWARE_GROUP_F0_B
#define MILLIVOLT_PER_AMP       65
#define CURRENT_OFFSET          0
#define TARGET_VOLTAGE_DIVIDER  110
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_6
#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_6
#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_3
#define CURRENT_ADC_PIN     LL_GPIO_PIN_3
#define USE_SERIAL_TELEMETRY
#define TARGET_STALL_PROTECTION_INTERVAL 9000
#endif

#ifdef  RHINO80A_F051
#define FILE_NAME				"RHINO80A_F051"
#define FIRMWARE_NAME           "RHINO80A_F0 "
#define DEAD_TIME               20
#define MILLIVOLT_PER_AMP       34
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_6
#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_6
#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_3
#define CURRENT_ADC_PIN     LL_GPIO_PIN_3
#define HARDWARE_GROUP_F0_B
#define USE_SERIAL_TELEMETRY
#endif

#ifdef AGFRC_V2_F051
#define FILE_NAME				"AGFRC_V2_F051"
#define FIRMWARE_NAME           "AGFRC V2"
#define DEAD_TIME               45
#define TARGET_VOLTAGE_DIVIDER  110
#define MILLIVOLT_PER_AMP       50
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_6
#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_6
#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_3
#define CURRENT_ADC_PIN     LL_GPIO_PIN_3
#define HARDWARE_GROUP_F0_A
#define USE_SERIAL_TELEMETRY
#define USE_CUSTOM_LED
#endif

#ifdef REPEAT_DRIVE_F051
#define FILE_NAME				"REPEAT_DRIVE_F051"
#define FIRMWARE_NAME           "REPEAT DRIVE"
#define DEAD_TIME               25
#define HARDWARE_GROUP_F0_B
#define USE_SERIAL_TELEMETRY
#define VOLTAGE_BASED_RAMP      
#endif

#ifdef FLASHHOBBY_F051
#define FILE_NAME				"FLASHHOBBY_F051"
#define FIRMWARE_NAME           "FLASHHOBBY  "
#define DEAD_TIME               30
#define TARGET_VOLTAGE_DIVIDER  110
#define MILLIVOLT_PER_AMP       10
#define CURRENT_OFFSET          1010   // millivolts
#define HARDWARE_GROUP_F0_A
#define USE_SERIAL_TELEMETRY
#endif
/*******************************   G071 Targets *********************************/

#ifdef  GEN_64K_G071
#define FILE_NAME				"GEN_64K_G071"
#define FIRMWARE_NAME  			 "G071 64kESC "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       67
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_A
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif

#ifdef TMOTOR_G071
#define FILE_NAME				"TMOTOR_G071"
#define FIRMWARE_NAME  			"T-Motor G071"
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       67
#define CURRENT_OFFSET          0
#define TARGET_VOLTAGE_DIVIDER  110
#define HARDWARE_GROUP_G0_H
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif


#ifdef  SEQURE_G071
#define FILE_NAME				"SEQURE_G071"
#define FIRMWARE_NAME  			 "SEQURE G071 "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       33
#define CURRENT_OFFSET          0
#define TARGET_STALL_PROTECTION_INTERVAL 9000
#define TARGET_VOLTAGE_DIVIDER  210
#define HARDWARE_GROUP_G0_A
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_4
#define CURRENT_ADC_PIN LL_GPIO_PIN_4
#define USE_LED_STRIP
#endif

#ifdef HAKRC_2023_G071
#define FILE_NAME				"HAKRC_2023_G071"
#define FIRMWARE_NAME  			"HAKRC G0_23 "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       45
#define CURRENT_OFFSET          515
#define TARGET_VOLTAGE_DIVIDER  110
#define HARDWARE_GROUP_G0_I
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#define USE_LED_STRIP
#endif

#ifdef  NEUTRONRC_G071
#define FILE_NAME				"NEUTRONRC_G071"
#define FIRMWARE_NAME  			"NeutronRC G0"
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       33
#define CURRENT_OFFSET          0
#define TARGET_VOLTAGE_DIVIDER  210
#define HARDWARE_GROUP_G0_N
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif


#ifdef AIKON_PRO_G071
#define FILE_NAME				"AIKON_PRO_G071"
#define FIRMWARE_NAME  			"AIKON PRO 50"
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       67
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_G
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif


#ifdef  GEN_128K_G071
#define FILE_NAME				"GEN_128K_G071"
#define FIRMWARE_NAME  			"G071 DevESC "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       15
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_A
#define USE_SERIAL_TELEMETRY
#endif


#ifdef  IFLIGHT_BLITZ_G071
#define FILE_NAME				"IFLIGHT_BLITZ_G071"
#define FIRMWARE_NAME  			"Blitz 55 G0 "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       15
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_F
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif


#ifdef  DT120_G071
#define FILE_NAME				"DT120_G071"
#define FIRMWARE_NAME  			"G071 120 DT "
#define DEAD_TIME               120
#define MILLIVOLT_PER_AMP       15
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_A
#define USE_SERIAL_TELEMETRY
#endif

#ifdef  DT120_64K_G071
#define FILE_NAME				"DT120_64K_G071"
#define FIRMWARE_NAME  			"G071 120 64K"
#define DEAD_TIME               120
#define MILLIVOLT_PER_AMP       67
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_A
#define SIXTY_FOUR_KB_MEMORY
#endif

#ifdef  DT160_64K_G071
#define FILE_NAME				"DT160_64K_G071"
#define FIRMWARE_NAME  			"G071 160 64K"
#define DEAD_TIME               210
#define MILLIVOLT_PER_AMP       67
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_A
#define SIXTY_FOUR_KB_MEMORY
#endif


#ifdef  PWM_ENABLE_G071
#define FILE_NAME				"PWM_ENABLE_G071"
#define FIRMWARE_NAME           "G071 PWM_EN "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       20
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_B
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif

#ifdef  OPEN_DRAIN_G071
#define FILE_NAME				"OPEN_DRAIN_G071"
#define FIRMWARE_NAME           "G071 TEENSY "
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       20
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_C
#define USE_SERIAL_TELEMETRY
#define SIXTY_FOUR_KB_MEMORY
#endif

#ifdef  OPEN_DRAIN_B_G071
#define FILE_NAME				"OPEN_DRAIN_B_G071"
#define FIRMWARE_NAME           "G071 TEENSYB"
#define DEAD_TIME               60
#define MILLIVOLT_PER_AMP       20
#define CURRENT_OFFSET          0
#define HARDWARE_GROUP_G0_D
#define SIXTY_FOUR_KB_MEMORY
#endif

/********************************** F031 Targets ***********************************/

#ifdef 	   REF_F031
#define    FILE_NAME				"REF_F031"
#define    FIRMWARE_NAME  			"Yellow DEV  "
#define    DEAD_TIME 				60
#define    HARDWARE_GROUP_F031_A
#define    TARGET_STALL_PROTECTION_INTERVAL 8000
#define    MILLIVOLT_PER_AMP           60
#define    USE_SERIAL_TELEMETRY
#endif

/********************************** defaults if not set ***************************/

#ifndef 	TARGET_VOLTAGE_DIVIDER
#define 	TARGET_VOLTAGE_DIVIDER  	110
#endif

#ifndef 	SINE_DIVIDER
#define 	SINE_DIVIDER 				2
#endif

#ifndef  	MILLIVOLT_PER_AMP
#define     MILLIVOLT_PER_AMP           20
#endif 

#ifndef 	CURRENT_OFFSET
#define     CURRENT_OFFSET              0
#endif

#ifndef TARGET_STALL_PROTECTION_INTERVAL
#define TARGET_STALL_PROTECTION_INTERVAL 6500
#endif

#ifndef RAMP_SPEED_STARTUP
#define RAMP_SPEED_STARTUP 2
#endif

#ifndef RAMP_SPEED_LOW_RPM          // below commutation interval of 250us
#define RAMP_SPEED_LOW_RPM 10
#endif

#ifndef RAMP_SPEED_HIGH_RPM
#define RAMP_SPEED_HIGH_RPM 40
#endif


/************************************ F051 Hardware Groups ****************************/

#ifdef HARDWARE_GROUP_F0_A

#define MCU_F051
#define USE_TIMER_15_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_2
#define INPUT_PIN_PORT          GPIOA
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM15
#define IC_TIMER_POINTER        htim15
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_5
#define DMA_HANDLE_TYPE_DEF     hdma_tim15_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#define PHASE_A_COMP COMP_PA5
#define PHASE_B_COMP COMP_PA4
#define PHASE_C_COMP COMP_PA0

#endif


#ifdef HARDWARE_GROUP_F0_B

#define MCU_F051
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM3
#define IC_TIMER_POINTER        htim3
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_4
#define DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#define PHASE_A_COMP COMP_PA0
#define PHASE_B_COMP COMP_PA4
#define PHASE_C_COMP COMP_PA5

#endif


#ifdef  HARDWARE_GROUP_F0_C

#define MCU_F051
#define USE_TIMER_15_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_2
#define INPUT_PIN_PORT          GPIOA
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM15
#define IC_TIMER_POINTER        htim15
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_5
#define DMA_HANDLE_TYPE_DEF     hdma_tim15_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_B_GPIO_PORT_LOW   GPIOA
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_C_GPIO_PORT_LOW   GPIOB
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#define PHASE_A_COMP COMP_PA4
#define PHASE_B_COMP COMP_PA5
#define PHASE_C_COMP COMP_PA0

#endif



#ifdef HARDWARE_GROUP_F0_E

#define MCU_F051
#define USE_TIMER_15_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_2
#define INPUT_PIN_PORT          GPIOA
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM15
#define IC_TIMER_POINTER        htim15
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_5
#define DMA_HANDLE_TYPE_DEF     hdma_tim15_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_A_GPIO_PORT_LOW   GPIOA
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_C_GPIO_PORT_LOW   GPIOB
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#define PHASE_A_COMP COMP_PA0
#define PHASE_B_COMP COMP_PA4
#define PHASE_C_COMP COMP_PA5

#endif


#ifdef HARDWARE_GROUP_F0_F

#define MCU_F051
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM3
#define IC_TIMER_POINTER        htim3
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_4
#define DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#define PHASE_A_COMP COMP_PA5
#define PHASE_B_COMP COMP_PA0
#define PHASE_C_COMP COMP_PA4

#endif


#ifdef HARDWARE_GROUP_F0_G

#define MCU_F051
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM3
#define IC_TIMER_POINTER        htim3
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_4
#define DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#define PHASE_A_COMP COMP_PA4
#define PHASE_B_COMP COMP_PA0
#define PHASE_C_COMP COMP_PA5

#define USE_INVERTED_LOW
//#define USE_INVERTED_HIGH
#define USE_OPEN_DRAIN_LOW
#define USE_OPEN_DRAIN_HIGH

#endif

#ifdef HARDWARE_GROUP_F0_H

#define MCU_F051
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               LL_GPIO_PIN_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        LL_TIM_CHANNEL_CH1
#define IC_TIMER_REGISTER       TIM3
#define IC_TIMER_POINTER        htim3
#define INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_4
#define DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define IC_DMA_IRQ_NAME         DMA1_Channel4_5_IRQn

#define PHASE_A_GPIO_LOW        LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA


#define PHASE_A_COMP COMP_PA5
#define PHASE_B_COMP COMP_PA4
#define PHASE_C_COMP COMP_PA0

#endif



/************************************* G071 Hardware Groups **********************************/



#ifdef     HARDWARE_GROUP_G0_A

#define    MCU_G071
#define    USE_TIMER_3_CHANNEL_1
#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW         GPIOA
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2

#endif


#ifdef     HARDWARE_GROUP_G0_B

#define    MCU_G071
#define    PWM_ENABLE_BRIDGE
#define    USE_TIMER_3_CHANNEL_1

#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_PWM          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_PWM         GPIOA
#define PHASE_A_GPIO_ENABLE          LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_ENABLE         GPIOB

#define PHASE_B_GPIO_PWM          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_PWM         GPIOA
#define PHASE_B_GPIO_ENABLE          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_ENABLE         GPIOB

#define PHASE_C_GPIO_PWM          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_PWM         GPIOA
#define PHASE_C_GPIO_ENABLE          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_ENABLE         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2

#endif


#ifdef     HARDWARE_GROUP_G0_C

#define    MCU_G071
#define    OPEN_DRAIN_PWM
#define    PWM_ENABLE_BRIDGE
#define    USE_TIMER_3_CHANNEL_1

#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_PWM          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_PWM         GPIOA
#define PHASE_A_GPIO_ENABLE          LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_ENABLE         GPIOB

#define PHASE_B_GPIO_PWM          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_PWM         GPIOA
#define PHASE_B_GPIO_ENABLE          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_ENABLE         GPIOB

#define PHASE_C_GPIO_PWM          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_PWM         GPIOA
#define PHASE_C_GPIO_ENABLE          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_ENABLE         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2

#endif


#ifdef     HARDWARE_GROUP_G0_D

#define    MCU_G071
#define    OPEN_DRAIN_PWM
#define    PWM_ENABLE_BRIDGE
#define    USE_TIMER_3_CHANNEL_1

#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_PWM          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_PWM         GPIOA
#define PHASE_A_GPIO_ENABLE          LL_GPIO_PIN_15
#define PHASE_A_GPIO_PORT_ENABLE         GPIOA

#define PHASE_B_GPIO_PWM          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_PWM         GPIOA
#define PHASE_B_GPIO_ENABLE          LL_GPIO_PIN_6
#define PHASE_B_GPIO_PORT_ENABLE         GPIOC

#define PHASE_C_GPIO_PWM          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_PWM         GPIOA
#define PHASE_C_GPIO_ENABLE          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_ENABLE         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2
#endif

#ifdef     HARDWARE_GROUP_G0_F

#define    MCU_G071
#define    USE_TIMER_3_CHANNEL_1
#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW         GPIOA
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2

#endif

#ifdef     HARDWARE_GROUP_G0_G

#define    MCU_G071
#define    N_VARIANT
#define    USE_TIMER_16_CHANNEL_1
#define    INPUT_PIN               LL_GPIO_PIN_6
#define    INPUT_PIN_PORT              GPIOA
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM16
#define    IC_TIMER_POINTER           htim16

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim16_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_15
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW         GPIOA
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa0

#define PHASE_A_EXTI_LINE           LL_EXTI_LINE_18
#define PHASE_A_COMP_NUMBER         COMP2

#define PHASE_B_EXTI_LINE           LL_EXTI_LINE_18
#define PHASE_B_COMP_NUMBER         COMP2

#define PHASE_C_EXTI_LINE           LL_EXTI_LINE_17
#define PHASE_C_COMP_NUMBER         COMP1

#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_5
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_5

#define CURRENT_ADC_PIN     LL_GPIO_PIN_4
#define CURRENT_ADC_CHANNEL  LL_ADC_CHANNEL_4

#endif



#ifdef     HARDWARE_GROUP_G0_H

#define    MCU_G071
#define    N_VARIANT
#define    USE_TIMER_16_CHANNEL_1
#define    INPUT_PIN               LL_GPIO_PIN_6
#define    INPUT_PIN_PORT              GPIOA
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM16
#define    IC_TIMER_POINTER           htim16

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim16_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_15
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW         GPIOA
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa0

#define PHASE_A_EXTI_LINE           LL_EXTI_LINE_18
#define PHASE_A_COMP_NUMBER         COMP2

#define PHASE_B_EXTI_LINE           LL_EXTI_LINE_18
#define PHASE_B_COMP_NUMBER         COMP2

#define PHASE_C_EXTI_LINE           LL_EXTI_LINE_17
#define PHASE_C_COMP_NUMBER         COMP1

#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_5
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_5

#define CURRENT_ADC_PIN     LL_GPIO_PIN_4
#define CURRENT_ADC_CHANNEL  LL_ADC_CHANNEL_4

#endif
#ifdef     HARDWARE_GROUP_G0_N

#define    USE_LED_STRIP
#define    MCU_G071
#define    USE_TIMER_3_CHANNEL_1
#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW         GPIOA
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2

#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_6
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_6

#define CURRENT_ADC_PIN     LL_GPIO_PIN_4
#define CURRENT_ADC_CHANNEL  LL_ADC_CHANNEL_4

#endif

#ifdef     HARDWARE_GROUP_G0_I

#define    MCU_G071
#define    USE_TIMER_3_CHANNEL_1
#define    INPUT_PIN               LL_GPIO_PIN_4
#define    INPUT_PIN_PORT              GPIOB
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH1
#define    IC_TIMER_REGISTER          TIM3
#define    IC_TIMER_POINTER           htim3

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim3_ch1
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW         GPIOA
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define PHASE_A_COMP  LL_COMP_INPUT_MINUS_IO1  // pb3
#define PHASE_B_COMP  LL_COMP_INPUT_MINUS_IO2  // pb7
#define PHASE_C_COMP  LL_COMP_INPUT_MINUS_IO3  // pa2

#define VOLTAGE_ADC_PIN     LL_GPIO_PIN_1
#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_1

#define CURRENT_ADC_PIN     LL_GPIO_PIN_5
#define CURRENT_ADC_CHANNEL  LL_ADC_CHANNEL_5

#endif

/************************************ G031 Hardware Groups ************************************************/

#ifdef HARDWARE_GROUP_F031_A

#define    EXTI_TYPE_BAC
#define    USE_TIMER_2_CHANNEL_3
#define    MCU_F031

#define    INPUT_PIN               LL_GPIO_PIN_2
#define    INPUT_PIN_PORT              GPIOA
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH3
#define    IC_TIMER_REGISTER          TIM2
#define    IC_TIMER_POINTER           htim2

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim2_ch3
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn

#define    PHASE_A_EXTI_PORT          GPIOF
#define    PHASE_B_EXTI_PORT          GPIOF
#define    PHASE_C_EXTI_PORT          GPIOA

#define    PHASE_A_EXTI_PIN           LL_GPIO_PIN_0
#define    PHASE_B_EXTI_PIN           LL_GPIO_PIN_1
#define    PHASE_C_EXTI_PIN           LL_GPIO_PIN_6

#define    PHASE_A_EXTI_LINE          0
#define    PHASE_B_EXTI_LINE          1
#define    PHASE_C_EXTI_LINE          6

#define    SYSCFG_EXTI_PORTA         LL_SYSCFG_EXTI_PORTF
#define    SYSCFG_EXTI_PORTB         LL_SYSCFG_EXTI_PORTF
#define    SYSCFG_EXTI_PORTC         LL_SYSCFG_EXTI_PORTA

#define    SYSCFG_EXTI_LINEA         LL_SYSCFG_EXTI_LINE0
#define    SYSCFG_EXTI_LINEB         LL_SYSCFG_EXTI_LINE1
#define    SYSCFG_EXTI_LINEC         LL_SYSCFG_EXTI_LINE6

#define    PHASE_A_LL_EXTI_LINE      LL_EXTI_LINE_0
#define    PHASE_B_LL_EXTI_LINE      LL_EXTI_LINE_1
#define    PHASE_C_LL_EXTI_LINE      LL_EXTI_LINE_6

#define    EXTI_IRQ1_NAME          EXTI0_1_IRQn
#define    EXTI_IRQ2_NAME          EXTI4_15_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_14
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_13
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_15
#define PHASE_C_GPIO_PORT_LOW         GPIOB
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define CURRENT_SENSE_ADC_PIN        LL_GPIO_PIN_5
#define VOLTAGE_SENSE_ADC_PIN        LL_GPIO_PIN_7

#define CURRENT_ADC_CHANNEL         LL_ADC_CHANNEL_5
#define VOLTAGE_ADC_CHANNEL         LL_ADC_CHANNEL_7


#endif

#ifdef    HARDWARE_GROUP_F031_B

#define    USE_TIMER_2_CHANNEL_3
#define    INPUT_PIN               LL_GPIO_PIN_2
#define    IC_TIMER_CHANNEL         LL_TIM_CHANNEL_CH3
#define    IC_TIMER_REGISTER          TIM2
#define    IC_TIMER_POINTER           htim2

#define    INPUT_DMA_CHANNEL       LL_DMA_CHANNEL_1
#define    DMA_HANDLE_TYPE_DEF     hdma_tim2_ch3
#define    IC_DMA_IRQ_NAME         DMA1_Channel1_IRQn


#define    PHASE_A_EXTI_PORT          GPIOF
#define    PHASE_B_EXTI_PORT          GPIOF
#define    PHASE_C_EXTI_PORT          GPIOA

#define    PHASE_A_EXTI_PIN           LL_GPIO_PIN_0
#define    PHASE_B_EXTI_PIN           LL_GPIO_PIN_1
#define    PHASE_C_EXTI_PIN           LL_GPIO_PIN_5

#define    PHASE_A_EXTI_LINE          0
#define    PHASE_B_EXTI_LINE          1
#define    PHASE_C_EXTI_LINE          5

#define    SYSCFG_EXTI_PORTA         LL_SYSCFG_EXTI_PORTF
#define    SYSCFG_EXTI_PORTB         LL_SYSCFG_EXTI_PORTF
#define    SYSCFG_EXTI_PORTC         LL_SYSCFG_EXTI_PORTA

#define    SYSCFG_EXTI_LINEA         LL_SYSCFG_EXTI_LINE0
#define    SYSCFG_EXTI_LINEB         LL_SYSCFG_EXTI_LINE1
#define    SYSCFG_EXTI_LINEC         LL_SYSCFG_EXTI_LINE5

#define    PHASE_A_LL_EXTI_LINE      LL_EXTI_LINE_0
#define    PHASE_B_LL_EXTI_LINE      LL_EXTI_LINE_1
#define    PHASE_C_LL_EXTI_LINE      LL_EXTI_LINE_5

#define    EXTI_IRQ1_NAME          EXTI0_1_IRQn
#define    EXTI_IRQ2_NAME          EXTI4_15_IRQn

#define PHASE_A_GPIO_LOW          LL_GPIO_PIN_14
#define PHASE_A_GPIO_PORT_LOW         GPIOB
#define PHASE_A_GPIO_HIGH          LL_GPIO_PIN_9
#define PHASE_A_GPIO_PORT_HIGH         GPIOA

#define PHASE_B_GPIO_LOW          LL_GPIO_PIN_13
#define PHASE_B_GPIO_PORT_LOW         GPIOB
#define PHASE_B_GPIO_HIGH          LL_GPIO_PIN_8
#define PHASE_B_GPIO_PORT_HIGH         GPIOA

#define PHASE_C_GPIO_LOW          LL_GPIO_PIN_15
#define PHASE_C_GPIO_PORT_LOW         GPIOB
#define PHASE_C_GPIO_HIGH          LL_GPIO_PIN_10
#define PHASE_C_GPIO_PORT_HIGH         GPIOA

#define CURRENT_SENSE_ADC_PIN        LL_GPIO_PIN_3
#define VOLTAGE_SENSE_ADC_PIN        LL_GPIO_PIN_4

#define CURRENT_ADC_CHANNEL         LL_ADC_CHANNEL_3
#define VOLTAGE_ADC_CHANNEL         LL_ADC_CHANNEL_4

#endif

/***********************************************************************************************************/

#ifdef HARDWARE_GROUP_GD_A

#define MCU_GDE23
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               GPIO_PIN_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        TIMER_CH_0
#define IC_TIMER_REGISTER       TIMER2
#define INPUT_DMA_CHANNEL       DMA_CH3
#define IC_DMA_IRQ_NAME         DMA_Channel3_4_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PIN_7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       GPIO_PIN_8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA


#define PHASE_A_COMP 0x61  //CMP_PA0
#define PHASE_B_COMP 0x41  //CMP_PA4
#define PHASE_C_COMP 0x51  //CMP_PA5

#endif

#ifdef HARDWARE_GROUP_GD_B

#define MCU_GDE23
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               GPIO_PIN_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        TIMER_CH_0
#define IC_TIMER_REGISTER       TIMER2
#define INPUT_DMA_CHANNEL       DMA_CH3
#define IC_DMA_IRQ_NAME         DMA_Channel3_4_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PIN_1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PIN_10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PIN_0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       GPIO_PIN_9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PIN_8
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       GPIO_PIN_7
#define PHASE_C_GPIO_PORT_HIGH  GPIOA


#define PHASE_A_COMP 0x61  //CMP_PA0
#define PHASE_B_COMP 0x41  //CMP_PA4
#define PHASE_C_COMP 0x51  //CMP_PA5

#endif



#ifdef HARDWARE_GROUP_AT_B

#define MCU_AT421
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               GPIO_PINS_4
#define INPUT_PIN_SOURCE        GPIO_PINS_SOURCE4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        TMR_SELECT_CHANNEL_1
#define IC_TIMER_REGISTER       TMR3
#define INPUT_DMA_CHANNEL       DMA1_CHANNEL4
#define IC_DMA_IRQ_NAME         DMA1_Channel5_4_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PINS_1
#define PHASE_A_PIN_SOURCE_LOW  GPIO_PINS_SOURCE1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PINS_10
#define PHASE_A_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PINS_0
#define PHASE_B_PIN_SOURCE_LOW  GPIO_PINS_SOURCE0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       GPIO_PINS_9
#define PHASE_B_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PINS_7
#define PHASE_C_PIN_SOURCE_LOW  GPIO_PINS_SOURCE7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       GPIO_PINS_8
#define PHASE_C_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#endif

#ifdef HARDWARE_GROUP_AT_C

#define MCU_AT421
#define USE_TIMER_15_CHANNEL_1
#define INPUT_PIN               GPIO_PINS_2
#define INPUT_PIN_SOURCE        GPIO_PINS_SOURCE2
#define INPUT_PIN_PORT          GPIOA
#define IC_TIMER_CHANNEL        TMR_SELECT_CHANNEL_1
#define IC_TIMER_REGISTER       TMR15
#define INPUT_DMA_CHANNEL       DMA1_CHANNEL5
#define IC_DMA_IRQ_NAME         DMA1_Channel5_4_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PINS_1
#define PHASE_A_PIN_SOURCE_LOW  GPIO_PINS_SOURCE1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PINS_10
#define PHASE_A_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PINS_0
#define PHASE_B_PIN_SOURCE_LOW  GPIO_PINS_SOURCE0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       GPIO_PINS_9
#define PHASE_B_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PINS_7
#define PHASE_C_PIN_SOURCE_LOW  GPIO_PINS_SOURCE7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       GPIO_PINS_8
#define PHASE_C_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA


#endif

#ifdef HARDWARE_GROUP_AT_D

#define MCU_AT415
#define USE_TIMER_3_CHANNEL_1
#define INPUT_PIN               GPIO_PINS_4
#define INPUT_PIN_PORT          GPIOB
#define IC_TIMER_CHANNEL        TMR_SELECT_CHANNEL_1
#define IC_TIMER_REGISTER       TMR3
#define INPUT_DMA_CHANNEL       DMA1_CHANNEL6
#define IC_DMA_IRQ_NAME         DMA1_Channel6_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PINS_1
#define PHASE_A_PIN_SOURCE_LOW  GPIO_PIN_SOURCE1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PINS_10
#define PHASE_A_PIN_SOURCE_HIGH GPIO_PIN_SOURCE10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PINS_0
#define PHASE_B_PIN_SOURCE_LOW  GPIO_PIN_SOURCE0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       GPIO_PINS_9
#define PHASE_B_PIN_SOURCE_HIGH  GPIO_PIN_SOURCE9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PINS_7
#define PHASE_C_PIN_SOURCE_LOW  GPIO_PIN_SOURCE7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       GPIO_PINS_8
#define PHASE_C_PIN_SOURCE_HIGH  GPIO_PIN_SOURCE8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA


//#define PHASE_A_COMP COMP_INMInput_IN3  // pa0
//#define PHASE_B_COMP COMP_INMInput_IN1  // pa4
//#define PHASE_C_COMP COMP_INMInput_IN2  // pa5

#define PHASE_A_COMP  0x400000E1            // works for polling mode
#define PHASE_B_COMP  0x400000C1
#define PHASE_C_COMP  0x400000D1

#endif

#ifdef HARDWARE_GROUP_AT_E

#define MCU_AT421
#define USE_TIMER_15_CHANNEL_1
#define USE_PA14_TELEMETRY
#define USE_PA6_TEMP
#define INPUT_PIN               GPIO_PINS_2
#define INPUT_PIN_SOURCE        GPIO_PINS_SOURCE2
#define INPUT_PIN_PORT          GPIOA
#define IC_TIMER_CHANNEL        TMR_SELECT_CHANNEL_1
#define IC_TIMER_REGISTER       TMR15
#define INPUT_DMA_CHANNEL       DMA1_CHANNEL5
#define IC_DMA_IRQ_NAME         DMA1_Channel5_4_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PINS_1
#define PHASE_A_PIN_SOURCE_LOW  GPIO_PINS_SOURCE1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PINS_10
#define PHASE_A_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PINS_0
#define PHASE_B_PIN_SOURCE_LOW  GPIO_PINS_SOURCE0
#define PHASE_B_GPIO_PORT_LOW   GPIOB
#define PHASE_B_GPIO_HIGH       GPIO_PINS_9
#define PHASE_B_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PINS_7
#define PHASE_C_PIN_SOURCE_LOW  GPIO_PINS_SOURCE7
#define PHASE_C_GPIO_PORT_LOW   GPIOA
#define PHASE_C_GPIO_HIGH       GPIO_PINS_8
#define PHASE_C_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA


#endif


#ifdef HARDWARE_GROUP_AT_F

#define MCU_AT421
#define USE_TIMER_15_CHANNEL_1
//#define USE_PA14_TELEMETRY
//#define USE_PA6_TEMP
#define INPUT_PIN               GPIO_PINS_2
#define INPUT_PIN_SOURCE        GPIO_PINS_SOURCE2
#define INPUT_PIN_PORT          GPIOA
#define IC_TIMER_CHANNEL        TMR_SELECT_CHANNEL_1
#define IC_TIMER_REGISTER       TMR15
#define INPUT_DMA_CHANNEL       DMA1_CHANNEL5
#define IC_DMA_IRQ_NAME         DMA1_Channel5_4_IRQn

#define PHASE_A_GPIO_LOW        GPIO_PINS_1
#define PHASE_A_PIN_SOURCE_LOW  GPIO_PINS_SOURCE1
#define PHASE_A_GPIO_PORT_LOW   GPIOB
#define PHASE_A_GPIO_HIGH       GPIO_PINS_10
#define PHASE_A_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE10
#define PHASE_A_GPIO_PORT_HIGH  GPIOA

#define PHASE_B_GPIO_LOW        GPIO_PINS_7
#define PHASE_B_PIN_SOURCE_LOW  GPIO_PINS_SOURCE7
#define PHASE_B_GPIO_PORT_LOW   GPIOA
#define PHASE_B_GPIO_HIGH       GPIO_PINS_9
#define PHASE_B_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE9
#define PHASE_B_GPIO_PORT_HIGH  GPIOA

#define PHASE_C_GPIO_LOW        GPIO_PINS_0
#define PHASE_C_PIN_SOURCE_LOW  GPIO_PINS_SOURCE0
#define PHASE_C_GPIO_PORT_LOW   GPIOB
#define PHASE_C_GPIO_HIGH       GPIO_PINS_8
#define PHASE_C_PIN_SOURCE_HIGH  GPIO_PINS_SOURCE8
#define PHASE_C_GPIO_PORT_HIGH  GPIOA

#endif

#ifdef HARDWARE_GROUP_AT_045
#define PHASE_A_COMP  0x400000E1       //pa0     // works for polling mode
#define PHASE_B_COMP  0x400000C1       //pa4
#define PHASE_C_COMP  0x400000D1       //pa5
#endif
#ifdef HARDWARE_GROUP_AT_504
#define PHASE_A_COMP  0x400000D1       //pa5            // works for polling mode
#define PHASE_B_COMP  0x400000E1       //pa0       
#define PHASE_C_COMP  0x400000C1       //pa4       
#endif
#ifdef HARDWARE_GROUP_AT_450
#define PHASE_A_COMP  0x400000C1       //pa4            // works for polling mode
#define PHASE_B_COMP  0x400000D1       //pa5      
#define PHASE_C_COMP  0x400000E1       //pa0       
#endif
#ifdef HARDWARE_GROUP_AT_054
#define PHASE_A_COMP  0x400000E1       //pa0            // works for polling mode
#define PHASE_B_COMP  0x400000D1       //pa5       
#define PHASE_C_COMP  0x400000C1       //pa4      
#endif
#ifdef HARDWARE_GROUP_AT_405
#define PHASE_A_COMP  0x400000C1       //pa4            // works for polling mode
#define PHASE_B_COMP  0x400000E1       //pa0       
#define PHASE_C_COMP  0x400000D1       //pa5       
#endif
#ifdef HARDWARE_GROUP_AT_540
#define PHASE_A_COMP  0x400000D1       //pa5           // works for polling mode
#define PHASE_B_COMP  0x400000C1       //pa4       
#define PHASE_C_COMP  0x400000E1       //pa0       
#endif

#ifdef HARDWARE_GROUP_AT_245
#define PHASE_A_COMP  0x400000F1       //pa2     // works for polling mode
#define PHASE_B_COMP  0x400000C1       //pa4
#define PHASE_C_COMP  0x400000D1       //pa5
#endif


/************************************ MCU COMMON PERIPHERALS **********************************************/

#ifdef MCU_F051
#define STMICRO
#define CPU_FREQUENCY_MHZ   48
#define EEPROM_START_ADD  (uint32_t)0x08007C00
#define INTERVAL_TIMER     TIM2
#define TEN_KHZ_TIMER      TIM6
#define UTILITY_TIMER      TIM17
#define COM_TIMER          TIM14
#define TIM1_AUTORELOAD    1999
#define APPLICATION_ADDRESS 0x08001000
#define MAIN_COMP	COMP1
#define EXTI_LINE   LL_EXTI_LINE_21
#define TARGET_MIN_BEMF_COUNTS 4
#define COMPARATOR_IRQ  ADC1_COMP_IRQn
#define USE_ADC
#ifndef CURRENT_ADC_PIN
	#define CURRENT_ADC_PIN LL_GPIO_PIN_6
	#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_6
#endif
#ifndef VOLTAGE_ADC_PIN
	#define VOLTAGE_ADC_PIN LL_GPIO_PIN_3
	#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_3
#endif
#define COM_TIMER_IRQ   TIM14_IRQn
#define DSHOT_PRIORITY_THRESHOLD  70
#endif

#ifdef MCU_F031
#define STMICRO
#define CPU_FREQUENCY_MHZ   48
#define EEPROM_START_ADD  (uint32_t)0x08007C00
#define INTERVAL_TIMER     TIM3
#define TEN_KHZ_TIMER      TIM16
#define UTILITY_TIMER      TIM17
#define COM_TIMER          TIM14
#define TIM1_AUTORELOAD    1999
#define APPLICATION_ADDRESS 0x08001000
#define TARGET_MIN_BEMF_COUNTS 3
//#define USE_SERIAL_TELEMETRY // moved to individual ESCs
#define USE_ADC
#define LOOP_FREQUENCY_HZ 10000
#endif

#ifdef MCU_G071
#define STMICRO
#define CPU_FREQUENCY_MHZ   64
#ifdef  SIXTY_FOUR_KB_MEMORY
#define EEPROM_START_ADD  (uint32_t)0x0800F800
#else
#define EEPROM_START_ADD  (uint32_t)0x0801F800
#endif
#define INTERVAL_TIMER     TIM2
#define TEN_KHZ_TIMER      TIM6
#define UTILITY_TIMER      TIM17
#define COM_TIMER          TIM14
#define TIM1_AUTORELOAD    2667
#define APPLICATION_ADDRESS 0x08001000
#define MAIN_COMP	COMP2
#define EXTI_LINE   LL_EXTI_LINE_18
#define TARGET_MIN_BEMF_COUNTS 2
#define COMPARATOR_IRQ  ADC1_COMP_IRQn
#define USE_ADC
#ifndef CURRENT_ADC_CHANNEL
	#define CURRENT_ADC_CHANNEL LL_ADC_CHANNEL_5
#endif
#ifndef VOLTAGE_ADC_CHANNEL
	#define VOLTAGE_ADC_CHANNEL LL_ADC_CHANNEL_6
#endif
#ifndef CURRENT_ADC_PIN
	#define CURRENT_ADC_PIN LL_GPIO_PIN_5
#endif
#ifndef VOLTAGE_ADC_PIN
	#define VOLTAGE_ADC_PIN LL_GPIO_PIN_6
#endif
#define DSHOT_PRIORITY_THRESHOLD  60
#define COM_TIMER_IRQ   TIM14_IRQn
#endif


#ifdef MCU_GDE23
#define GIGADEVICES
#define CPU_FREQUENCY_MHZ   72

#define EEPROM_START_ADD  (uint32_t)0x08007C00

#define INTERVAL_TIMER     TIMER5
#define TEN_KHZ_TIMER      TIMER13
#define UTILITY_TIMER      TIMER16
#define COM_TIMER          TIMER15
#define TIM1_AUTORELOAD    3000
#define APPLICATION_ADDRESS 0x08001000
#define EXTI_LINE   EXTI_21
#define TARGET_MIN_BEMF_COUNTS 4
#define USE_ADC
#define COMPARATOR_IRQ  ADC_CMP_IRQn
#define COM_TIMER_IRQ   TIMER15_IRQn
#define DSHOT_PRIORITY_THRESHOLD  50
#endif

#ifdef MCU_AT421
#define ARTERY
#define CPU_FREQUENCY_MHZ   120
#define EEPROM_START_ADD  (uint32_t)0x08007C00
#define INTERVAL_TIMER     TMR6
#define TEN_KHZ_TIMER      TMR14
#define UTILITY_TIMER      TMR17
#define COM_TIMER          TMR16
#define TIM1_AUTORELOAD    5000
#define APPLICATION_ADDRESS 0x08001000
#define EXTI_LINE   EXINT_LINE_21
#define TARGET_MIN_BEMF_COUNTS 3
#define COMPARATOR_IRQ  ADC1_CMP_IRQn
#define USE_ADC
#ifndef ADC_CHANNEL_CURRENT
#define ADC_CHANNEL_CURRENT  ADC_CHANNEL_6
#endif
#ifndef ADC_CHANNEL_VOLTAGE
#define ADC_CHANNEL_VOLTAGE  ADC_CHANNEL_3
#endif
#ifndef ADC_CHANNEL_TEMP
#define ADC_CHANNEL_TEMP     ADC_CHANNEL_16
#endif
#define DSHOT_PRIORITY_THRESHOLD  50
#define COM_TIMER_IRQ TMR16_GLOBAL_IRQn
#endif

#ifdef MCU_AT415
#define ARTERY
#define CPU_FREQUENCY_MHZ   144
#define EEPROM_START_ADD  (uint32_t)0x08007C00
#define INTERVAL_TIMER     TMR4
#define TEN_KHZ_TIMER      TMR9
#define UTILITY_TIMER      TMR10
#define COM_TIMER          TMR11
#define TIM1_AUTORELOAD    6000
#define APPLICATION_ADDRESS 0x08001000
#define EXTI_LINE   EXINT_LINE_19
#define TARGET_MIN_BEMF_COUNTS 3
#define USE_ADC
#define COMPARATOR_IRQ   CMP1_IRQn
//#define DSHOT_PRE            95
#define DSHOT_PRIORITY_THRESHOLD  50
#define COM_TIMER_IRQ TMR1_TRG_HALL_TMR11_IRQn
#endif


#ifndef LOOP_FREQUENCY_HZ
#define LOOP_FREQUENCY_HZ 20000
#endif

#define PID_LOOP_DIVIDER (LOOP_FREQUENCY_HZ/1000)


