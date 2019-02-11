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
LEDMMAtrix_7amok4a_in_GYM.lss \

FLASH_IMAGE += \
LEDMMAtrix_7amok4a_in_GYM.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: LEDMMAtrix_7amok4a_in_GYM.elf secondary-outputs

# Tool invocations
LEDMMAtrix_7amok4a_in_GYM.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LEDMMAtrix_7amok4a_in_GYM.map -mmcu=atmega32 -o "LEDMMAtrix_7amok4a_in_GYM.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LEDMMAtrix_7amok4a_in_GYM.lss: LEDMMAtrix_7amok4a_in_GYM.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LEDMMAtrix_7amok4a_in_GYM.elf  >"LEDMMAtrix_7amok4a_in_GYM.lss"
	@echo 'Finished building: $@'
	@echo ' '

LEDMMAtrix_7amok4a_in_GYM.hex: LEDMMAtrix_7amok4a_in_GYM.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LEDMMAtrix_7amok4a_in_GYM.elf  "LEDMMAtrix_7amok4a_in_GYM.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LEDMMAtrix_7amok4a_in_GYM.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LEDMMAtrix_7amok4a_in_GYM.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LEDMMAtrix_7amok4a_in_GYM.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
