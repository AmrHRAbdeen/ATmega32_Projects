/*
 * main.c
 *
 *  Created on: Feb 2, 2019
 *      Author: Amr Abdeen
 */
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "sevenSegment_interface.h"
#include "seven_segment_config.h"
#include "LED_interface.h"

#include <util/delay.h>




int main(){

//	BIT_CALC_SET_PORT_DIRECTION(PORTA->ByteAccess,0xff);
//	BIT_CALC_SET_PORT_VALUE(PORTA->ByteAccess,0xFF);

		u8 local_u8RED = TRUE;
		u8 local_u8Green= FALSE;
		u8 local_u8Yellow=FALSE;


		u8 local_loopCounter = 0;

		while (TRUE){


			if(local_u8RED == TRUE){

				u8_LedOn(24);
				u8_LedOff(26);
				local_u8RED = FALSE;
				local_u8Yellow = TRUE;
			}else if (local_u8Yellow ==TRUE){
				u8_LedOn(25);
				u8_LedOff(24);
				local_u8Yellow = FALSE;
				local_u8Green = TRUE;
			}else if (local_u8Green ==TRUE){
				u8_LedOn(26);
				u8_LedOff(25);
				local_u8Green = FALSE;
				local_u8RED = TRUE;
			}


			for (local_loopCounter =10 ; local_loopCounter >= 1 ; local_loopCounter--){
				sevenSegment_u8Display(local_loopCounter-1);
				_delay_ms(100);
			}
		}
	return ERROR_OK;
}

