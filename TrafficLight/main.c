/*
 * main.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
/*Include Header Files*/
#include "ATmega32_Regsiters.h"
#include "config_ATmega32.h"
#include "sevenseg_config.h"

#define INIT_ZERO_VAL     0
#define SEVEN_SEG_ARR_LEN 10

#define RED_LED           0
#define YELLOW_LED        1
#define GREEN_LED         2

const u8 sevenSeg[]={0x77,0x41,0x6E,0x6B,0x59,0x3B,0x3F,0x61,0xFF,0x7B};

int main(void){

	/*Port Configurations*/
	SEVEN_SEG_PORT_DIR =PORT_OUTPUT;
	DDRA->ByteAccess=PORT_OUTPUT;

	u8 counter=INIT_ZERO_VAL;
	/*Super Loop*/
	while(TRUE){

		PORTA->ByteAccess |=(TRUE<<RED_LED);
		for(counter=SEVEN_SEG_ARR_LEN;counter>INIT_ZERO_VAL;counter--)
		{
			SEVEN_SEG_PORT=sevenSeg[counter];
			delay_millisecond(SEVEN_SEG_DELAY);
		}
		PORTA->ByteAccess &=~(TRUE<<RED_LED);

		PORTA->ByteAccess |=(TRUE<<YELLOW_LED);
		for(counter=SEVEN_SEG_ARR_LEN;counter>INIT_ZERO_VAL;counter--)
		{
					SEVEN_SEG_PORT=sevenSeg[counter];
					delay_millisecond(SEVEN_SEG_DELAY);
		}
		PORTA->ByteAccess &=~(TRUE<<YELLOW_LED);

		PORTA->ByteAccess |=(TRUE<<GREEN_LED);
		for(counter=SEVEN_SEG_ARR_LEN;counter>INIT_ZERO_VAL;counter--)
		{
							SEVEN_SEG_PORT=sevenSeg[counter];
							delay_millisecond(SEVEN_SEG_DELAY);
		}
		PORTA->ByteAccess &=~(TRUE<<GREEN_LED);
		delay_millisecond(SEVEN_SEG_DELAY);
	}

	return FALSE;
}

