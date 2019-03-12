################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
LMD_KPD_7amokshaFun.lss \

FLASH_IMAGE += \
LMD_KPD_7amokshaFun.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: LMD_KPD_7amokshaFun.elf secondary-outputs

# Tool invocations
LMD_KPD_7amokshaFun.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LMD_KPD_7amokshaFun.map -mmcu=atmega32 -o "LMD_KPD_7amokshaFun.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LMD_KPD_7amokshaFun.lss: LMD_KPD_7amokshaFun.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LMD_KPD_7amokshaFun.elf  >"LMD_KPD_7amokshaFun.lss"
	@echo 'Finished building: $@'
	@echo ' '

LMD_KPD_7amokshaFun.hex: LMD_KPD_7amokshaFun.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LMD_KPD_7amokshaFun.elf  "LMD_KPD_7amokshaFun.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LMD_KPD_7amokshaFun.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LMD_KPD_7amokshaFun.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: LMD_KPD_7amokshaFun.elf
	@echo 'Invoking: AVRDude'
	C:\Users\Monika Ossama\Desktop\Mina\Assaf\SDK\IMT_SDK_Win_64\WinAVR\bin\avrdude -pm32 -cusbasp -Uflash:w:LMD_KPD_7amokshaFun.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LMD_KPD_7amokshaFun.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
