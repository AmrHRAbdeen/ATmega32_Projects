/*
 * main.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
#include "ATmega32_Regsiters.h"
#include "config_ATmega32.h"

#define DELAY_TIME 1000
#define NO_OF_BITS 8
#define INIT_VAL 0

int main(void)
{

	/*Ports Configurations*/
	DDRA->ByteAccess =PORT_OUTPUT;
	u8 bitNo=INIT_VAL;
	/*Super Loop Area*/
	while(TRUE)
	{

			for(bitNo=INIT_VAL;bitNo<NO_OF_BITS;bitNo++){
				PORTA->ByteAccess |=(TRUE<<bitNo);
				delay_millisecond(DELAY_TIME);
				PORTA->ByteAccess &=~(TRUE<<bitNo);
			}

			for(bitNo=INIT_VAL;bitNo>NO_OF_BITS;bitNo--){
				PORTA->ByteAccess |=(TRUE<<bitNo);
				delay_millisecond(DELAY_TIME);
				PORTA->ByteAccess &=~(TRUE<<bitNo);
			}
	}

	return FALSE; // Indicating NO ERROR Found
}

