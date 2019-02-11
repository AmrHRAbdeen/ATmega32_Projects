/*
 * LED_program.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "ATMEGA32_REGISTERS.h"

#include "config_ATmega32.h"

u8 LED_u8LEDON(void)
{
	u8 u8ErrorState;
	u8ErrorState=DIO_u8SetPinValue(22,1);
	return u8ErrorState;
}

u8 LED_u8LEDOFF(void){
	u8 u8ErrorState;
		u8ErrorState=DIO_u8SetPinValue(22,0);
		return u8ErrorState;
}
