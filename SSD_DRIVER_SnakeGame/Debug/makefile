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
SSD_DRIVER_SnakeGame.lss \

FLASH_IMAGE += \
SSD_DRIVER_SnakeGame.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: SSD_DRIVER_SnakeGame.elf secondary-outputs

# Tool invocations
SSD_DRIVER_SnakeGame.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SSD_DRIVER_SnakeGame.map -mmcu=atmega32 -o "SSD_DRIVER_SnakeGame.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SSD_DRIVER_SnakeGame.lss: SSD_DRIVER_SnakeGame.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SSD_DRIVER_SnakeGame.elf  >"SSD_DRIVER_SnakeGame.lss"
	@echo 'Finished building: $@'
	@echo ' '

SSD_DRIVER_SnakeGame.hex: SSD_DRIVER_SnakeGame.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SSD_DRIVER_SnakeGame.elf  "SSD_DRIVER_SnakeGame.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SSD_DRIVER_SnakeGame.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SSD_DRIVER_SnakeGame.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SSD_DRIVER_SnakeGame.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
