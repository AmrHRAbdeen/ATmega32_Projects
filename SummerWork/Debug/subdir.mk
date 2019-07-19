################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../DCMOTOR.c \
../DHT22.c \
../DIO.c \
../EXTERNAL_INTERRUPT.c \
../I2C.c \
../KEYPAD.c \
../LCD.c \
../LED.c \
../SERVO_FS90MG.c \
../SERVO_SG90.c \
../SEVENSEGMENT.c \
../SPI.c \
../TIMER0.c \
../TIMER1.c \
../TIMER2.c \
../UART.c \
../ULTRASONIC.c \
../eeprom.c \
../main.c 

OBJS += \
./ADC.o \
./DCMOTOR.o \
./DHT22.o \
./DIO.o \
./EXTERNAL_INTERRUPT.o \
./I2C.o \
./KEYPAD.o \
./LCD.o \
./LED.o \
./SERVO_FS90MG.o \
./SERVO_SG90.o \
./SEVENSEGMENT.o \
./SPI.o \
./TIMER0.o \
./TIMER1.o \
./TIMER2.o \
./UART.o \
./ULTRASONIC.o \
./eeprom.o \
./main.o 

C_DEPS += \
./ADC.d \
./DCMOTOR.d \
./DHT22.d \
./DIO.d \
./EXTERNAL_INTERRUPT.d \
./I2C.d \
./KEYPAD.d \
./LCD.d \
./LED.d \
./SERVO_FS90MG.d \
./SERVO_SG90.d \
./SEVENSEGMENT.d \
./SPI.d \
./TIMER0.d \
./TIMER1.d \
./TIMER2.d \
./UART.d \
./ULTRASONIC.d \
./eeprom.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=12000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


