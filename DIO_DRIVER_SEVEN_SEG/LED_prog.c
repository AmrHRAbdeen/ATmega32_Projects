/*
 * LED_prog.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */
#include "DIO_interface.h"
#include "STD_TYPES.h"

#define OUTPUT 1
#define INPUT  0

u8 u8_Led_GPIO_init(u8 u8PinNB){
	DIO_u8SetPinDirection(u8PinNB,OUTPUT);// set pin direction as output
	 // set this port as output
	return ERROR_OK;
}


u8 u8_LedOn(u8 u8PinNB){
	DIO_u8SetPinValue(u8PinNB, OUTPUT);
	return ERROR_OK;
}
u8 u8_LedOff(u8 u8PinNB){
	DIO_u8SetPinValue(u8PinNB, INPUT);
	return ERROR_OK;
}
