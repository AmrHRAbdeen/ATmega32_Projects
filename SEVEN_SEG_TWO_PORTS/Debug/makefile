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
SEVEN_SEG_TWO_PORTS.lss \

FLASH_IMAGE += \
SEVEN_SEG_TWO_PORTS.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: SEVEN_SEG_TWO_PORTS.elf secondary-outputs

# Tool invocations
SEVEN_SEG_TWO_PORTS.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SEVEN_SEG_TWO_PORTS.map -mmcu=atmega32 -o "SEVEN_SEG_TWO_PORTS.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SEVEN_SEG_TWO_PORTS.lss: SEVEN_SEG_TWO_PORTS.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SEVEN_SEG_TWO_PORTS.elf  >"SEVEN_SEG_TWO_PORTS.lss"
	@echo 'Finished building: $@'
	@echo ' '

SEVEN_SEG_TWO_PORTS.hex: SEVEN_SEG_TWO_PORTS.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SEVEN_SEG_TWO_PORTS.elf  "SEVEN_SEG_TWO_PORTS.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SEVEN_SEG_TWO_PORTS.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SEVEN_SEG_TWO_PORTS.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SEVEN_SEG_TWO_PORTS.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
