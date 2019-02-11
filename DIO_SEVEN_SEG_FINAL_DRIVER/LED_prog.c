/**********************************************************************************/
/* Author : Amr Abdeen                                                            */
/* Date   : 31 Jan. 2019                                                          */
/* Version: V01                                                                   */
/**********************************************************************************/
/* Description:                                                                   */
/*--------------                                                                  */
/*LED program File is used implement LED APIs                                     */
/*                                                                                */
/**********************************************************************************/

#include "STD_TYPES.h"
#include "DIO_interface.h"


u8 u8_ledinit(void)
{
	return ERROR_OK;
}

u8 LED_u8TurnLedOn(u8 Local_u8PinNB)
{
	DIO_u8SetPinValue(Local_u8PinNB, OUTPUT);
	return ERROR_OK;
}

u8 LED_u8TurnLedOff(u8 Local_u8PinNB)
{
	DIO_u8SetPinValue(Local_u8PinNB, INPUT);
	return ERROR_OK;
}
