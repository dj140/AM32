
TARGETS_G071 := \
	PWM_ENABLE_G071 OPEN_DRAIN_G071 OPEN_DRAIN_B_G071 GEN_64K_G071 DT120_64K_G071 IFLIGHT_BLITZ_G071  \
	NEUTRONRC_G071 AIKON_PRO_G071 TMOTOR_G071 

HAL_FOLDER_G071 := $(HAL_FOLDER)/g071

MCU_G071 := -mcpu=cortex-m0 -mthumb
LDSCRIPT_G071 := $(HAL_FOLDER_G071)/STM32G071GBUX_FLASH.ld

SRC_DIR_G071 := \
	$(HAL_FOLDER_G071)/Startup \
	$(HAL_FOLDER_G071)/Src \
	$(HAL_FOLDER_G071)/Drivers/STM32G0xx_HAL_Driver/Src

CFLAGS_G071 := \
	-I$(HAL_FOLDER_G071)/Inc \
	-I$(HAL_FOLDER_G071)/Drivers/STM32G0xx_HAL_Driver/Inc \
	-I$(HAL_FOLDER_G071)/Drivers/CMSIS/Include \
	-I$(HAL_FOLDER_G071)/Drivers/CMSIS/Device/ST/STM32G0xx/Include

CFLAGS_G071 += \
	-DHSE_VALUE=8000000 \
	-DSTM32G071xx \
	-DHSE_STARTUP_TIMEOUT=100 \
	-DLSE_STARTUP_TIMEOUT=5000 \
	-DLSE_VALUE=32768 \
	-DDATA_CACHE_ENABLE=1 \
	-DINSTRUCTION_CACHE_ENABLE=0 \
	-DVDD_VALUE=3300 \
	-DLSI_VALUE=32000 \
	-DHSI_VALUE=16000000 \
	-DUSE_FULL_LL_DRIVER \
	-DPREFETCH_ENABLE=1

SRC_G071 := $(foreach dir,$(SRC_DIR_G071),$(wildcard $(dir)/*.[cs]))
