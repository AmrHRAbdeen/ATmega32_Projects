################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_prog.c \
../DelayMs.c \
../Hamoksha_MAIN.c \
../KPD_prog.c \
../LCD_prog.c 

OBJS += \
./DIO_prog.o \
./DelayMs.o \
./Hamoksha_MAIN.o \
./KPD_prog.o \
./LCD_prog.o 

C_DEPS += \
./DIO_prog.d \
./DelayMs.d \
./Hamoksha_MAIN.d \
./KPD_prog.d \
./LCD_prog.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


