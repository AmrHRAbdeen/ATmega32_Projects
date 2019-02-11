/*
 * main.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
#include "ATmega32_Regsiters.h"
#include "config_ATmega32.h"

#define DELAY_TIME     50000
#define NIBBLE         4
#define LAST_BIT       7
#define TOATAL_NO_BITS 8
#define INIT_VAL       0
#define NO_ONE         1

int main(void)
{

	/*Ports Configurations*/
	DDRA->ByteAccess =PORT_OUTPUT;
	u8 bitNo=INIT_VAL;
	/*Super Loop Area*/
	while(TRUE)
	{

			for( bitNo=INIT_VAL; bitNo < NIBBLE ; bitNo++ )
			{
				PORTA->ByteAccess |=(TRUE<<bitNo);
				PORTA->ByteAccess |=(TRUE<<(LAST_BIT-bitNo));
				delay_millisecond(DELAY_TIME);
				PORTA->ByteAccess &=~(TRUE<<bitNo);
				PORTA->ByteAccess &=~(TRUE<<(LAST_BIT-bitNo));
			}

			for(bitNo=NIBBLE; bitNo > INIT_VAL ; bitNo-- ) //bitNo=4,
			{
				PORTA->ByteAccess |=(TRUE<<(bitNo-NO_ONE));//3
				PORTA->ByteAccess |=(TRUE<<(TOATAL_NO_BITS-bitNo));//4
				delay_millisecond(DELAY_TIME);
				PORTA->ByteAccess &=~(TRUE<<(bitNo-NO_ONE));
				PORTA->ByteAccess &=~(TRUE<<(TOATAL_NO_BITS-bitNo));
			}
	}

	return FALSE; // Indicating NO ERROR Found
}

