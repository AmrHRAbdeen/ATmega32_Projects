/**********************************************************************************/
/* Description:                                                                   */
/*--------------                                                                  */
/*LED program File is used implement LED APIs                                     */
/*                                                                                */
/**********************************************************************************/

#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "sevenSegment_interface.h"
#include "seven_segment_config.h"
#include "LED_interface.h"

#include <util/delay.h>


#define Local_u8LoopIndex 0

int main()
{
		u8 local_u8RED = TRUE;
		u8 local_u8Green= FALSE;
		u8 local_u8Yellow=FALSE;


		u8 local_loopCounter = Local_u8LoopIndex;

		while (TRUE){

			if(local_u8RED == TRUE)
			{

				LED_u8TurnLedOn(24);
				LED_u8TurnLedOn(26);
				local_u8RED = FALSE;
				local_u8Yellow = TRUE;
			}

			else if (local_u8Yellow ==TRUE)
			{
				LED_u8TurnLedOn(25);
				LED_u8TurnLedOn(24);
				local_u8Yellow = FALSE;
				local_u8Green = TRUE;
			}

			else if (local_u8Green ==TRUE)
			{
				LED_u8TurnLedOn(26);
				LED_u8TurnLedOn(25);
				local_u8Green = FALSE;
				local_u8RED = TRUE;
			}


			for (local_loopCounter =10 ; local_loopCounter >= 1 ; local_loopCounter--)
			{
				sevenSegment_u8Display(local_loopCounter-1);
				_delay_ms(100);
			}
		}
	return ERROR_OK;
}

