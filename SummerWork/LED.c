/*
 * LED.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: jo
 */
#include"TYPES.h"
#include"DIO.h"
#include"LED.h"






/***************************************************************************************/
/* Description! Setting LED State :---- ON or OFF                                      */
/* Input      ! PortNumber , PinNumber ,  LedState                                     */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void LED_VidSetLedState(u8 LOC_u8Port , u8 LOC_u8Pin , u8 LOC_u8State)
{

	DIO_VidSetPinDirection(LOC_u8Port , LOC_u8Pin , OUTPUT);

	if(LOC_u8State == ON)
	{
		DIO_VidSetPinValue(LOC_u8Port , LOC_u8Pin , HIGH);
	}
	else if(LOC_u8State == OFF) {

		DIO_VidSetPinValue(LOC_u8Port , LOC_u8Pin , LOW);

	}


}


