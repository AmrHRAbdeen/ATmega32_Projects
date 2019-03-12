/*
 * SWITCH_prog.c
 *
 *  Created on: Feb 7, 2019
 *      Author: Mina Nabil
 */
#include"STD_TYPES.h"
#include"BIT_CALC.h"

#include"DIO_interface.h"
#include "LMD_interface.h"

#include "LMD_private.h"
#include "DelayMs.h"


u8 LMD_u8SetPattern(u8 *Copy_Pu8LedmPattern,u8 Copy_u8LedmColor){
	u8 Local_u8Error = ERROR_OK;
	u8 Local_outerLoopIndex  ;
	u8 Local_outerLoopSetter ;
	u8 Local_InnerLoopIndex  ;
	u8 Local_InnerLoopSetter ;
	u8 Local_pinValue ;
	if(Copy_Pu8LedmPattern==NULL )
	{
		Local_u8Error=ERROR_NOK;
	}
	else
	{
		
		switch (LMD_u8_TYPE){
		case LMD_u8_ACTIVE_LOW :
			for(Local_outerLoopIndex = LOOP_INITAL_VALUE; Local_outerLoopIndex < LMD_ACTIVE_SIZE ; Local_outerLoopIndex++){


				for(Local_outerLoopSetter = LOOP_INITAL_VALUE; Local_outerLoopSetter < LMD_ACTIVE_SIZE; Local_outerLoopSetter++){
					if (Local_outerLoopIndex == Local_outerLoopSetter){
						DIO_u8SetPinValue(LMD_Au8ActiveConnection[Local_outerLoopSetter],DIO_u8_PIN_LOW);
					}else{
						DIO_u8SetPinValue(LMD_Au8ActiveConnection[Local_outerLoopSetter],DIO_u8_PIN_HIGH);
					}
				}

				for(Local_InnerLoopIndex = LOOP_INITAL_VALUE; Local_InnerLoopIndex < LMD_PATTERN_SIZE; Local_InnerLoopIndex++){
					 
					for(Local_InnerLoopSetter = LOOP_INITAL_VALUE; Local_InnerLoopSetter  < LMD_PATTERN_SIZE;Local_InnerLoopSetter ++){
					
						Local_pinValue=BIT_CALC_GET_BIT(Copy_Pu8LedmPattern[Local_InnerLoopIndex],Local_InnerLoopSetter);
						DIO_u8SetPinValue(LMD_Au8PatternConnection[Copy_u8LedmColor][Local_InnerLoopIndex], Local_pinValue);
					}
					 
				}


			}


			break;

	}
	return Local_u8Error;
}
