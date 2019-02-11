/*
 * sevenSegment_prog.c
 *
 *  Created on: Feb 2, 2019
 *      Author: Amr Abdeen
 */
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "sevenSegment_interface.h"
#include "sevenSegment_private.h"
#include "seven_segment_config.h"



u8 sevenSegment_u8Display( u8 Copy_u8Value){

	u8 Local_ErrorState= ERROR_OK;
	switch (SEVEN_SEGMENT_TYPE){
		case SEVEN_SEGMENT_COMMON_CATHOD:

			DIO_u8SetPortDirection(SEVEN_SEGMENT_PORT, OUTPUT_PORT);
			switch(Copy_u8Value){
				case STD_ZERO:
					 DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_ZERO);
					 //BIT_CALC_SET_PORT_DIRECTION(PORTA->ByteAccess,0xff);
					 //BIT_CALC_SET_PORT_VALUE(PORTA->ByteAccess,0xFF);
					 break;
				case STD_ONE:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_ONE);
					break;
				case STD_TWO:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_TWO);
					break;
				case STD_THREE:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_THREE);
					break;
				case STD_FOUR:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_FOUR);
					break;
				case STD_FIVE:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_FIVE);
					break;
				case STD_SIX:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_SIX);
					break;
				case STD_SEVEN:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_SEVEN);
					break;
				case STD_EIGHT:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_EIGHT);
					break;
				case STD_NINE:
					DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, SEVEN_SEG_NINE);
					break;
				default :
					Local_ErrorState = ERROR_NOK;
					break;

			}

			break;
		case SEVEN_SEGMENT_COMMON_ANODE:
			switch(Copy_u8Value){
							case STD_ZERO:
								 DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_ZERO);
								 break;
							case STD_ONE:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_ONE);
								break;
							case STD_TWO:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_TWO);
								break;
							case STD_THREE:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_THREE);
								break;
							case STD_FOUR:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_FOUR);
								break;
							case STD_FIVE:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_FIVE);
								break;
							case STD_SIX:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_SIX);
								break;
							case STD_SEVEN:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_SEVEN);
								break;
							case STD_EIGHT:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_EIGHT);
								break;
							case STD_NINE:
								DIO_u8SetPortnValue(SEVEN_SEGMENT_PORT, ~SEVEN_SEG_NINE);
								break;
							default :
								Local_ErrorState = ERROR_NOK;
								break;
						}
			break;
		default :
			Local_ErrorState = ERROR_NOK;

	}



	return Local_ErrorState;
}
