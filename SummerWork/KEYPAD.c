/*
 * KEYBAD.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: jo
 */
#include"TYPES.h"
#include"DIO.h"
#include"util/delay.h"
#include "KEYPAD_CFG.h"





/***************************************************************************************/
/* Description! Apply initialization sequence for KEYBAD Module like                   */
/*              pins and port directions                                               */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void KEYPAD_VidInit(void)
{

	DIO_VidSetPinDirection(KEYPAD_PORT , R0 , INPUT);
	DIO_VidSetPinDirection(KEYPAD_PORT , R1 , INPUT);
	DIO_VidSetPinDirection(KEYPAD_PORT , R2 , INPUT);
	DIO_VidSetPinDirection(KEYPAD_PORT , R3 , INPUT);

	DIO_VidSetPinValue(KEYPAD_PORT , R0 , HIGH);
	DIO_VidSetPinValue(KEYPAD_PORT , R1 , HIGH);
	DIO_VidSetPinValue(KEYPAD_PORT , R2 , HIGH);
	DIO_VidSetPinValue(KEYPAD_PORT , R3 , HIGH);

	DIO_VidSetPinDirection(KEYPAD_PORT , C0 , OUTPUT);
	DIO_VidSetPinDirection(KEYPAD_PORT , C1 , OUTPUT);
	DIO_VidSetPinDirection(KEYPAD_PORT , C2 , OUTPUT);
	DIO_VidSetPinDirection(KEYPAD_PORT , C3 , OUTPUT);

}






/***************************************************************************************/
/* Description! Interface to return PRESSED OR NOT_PRESSED  to Button                  */
/* Input      ! Button Number                                                          */
/* Output     ! PRESSED or NOT_PRESSED                                                 */
/***************************************************************************************/
u8 KEYPAD_u8GetButtonStatus(u8 LOC_u8Button)
{

	u8 LOC_u8Status = 0 ;
	u8 LOC_u8Real_Column[] = {C0 , C1 , C2 , C3};
	u8 LOC_u8Real_Rows[] = {R0 , R1 , R2 , R3};


	u8 LOC_u8Col = LOC_u8Button % 4 ;
	u8 LOC_u8Row = LOC_u8Button / 4 ;
	DIO_VidSetPinValue(KEYPAD_PORT , C0 , HIGH);
	DIO_VidSetPinValue(KEYPAD_PORT , C1 , HIGH);
	DIO_VidSetPinValue(KEYPAD_PORT , C2 , HIGH);
	DIO_VidSetPinValue(KEYPAD_PORT , C3 , HIGH);

	DIO_VidSetPinValue(KEYPAD_PORT , LOC_u8Real_Column[LOC_u8Col] , LOW);


	if( DIO_u8ReadPin(KEYPAD_PORT , LOC_u8Real_Rows[LOC_u8Row] ) == LOW)
	{

		_delay_ms(10);

		if(DIO_u8ReadPin(KEYPAD_PORT , LOC_u8Real_Rows[LOC_u8Row] ) == LOW)
		{
			LOC_u8Status = 1 ;
		}

	}

	return LOC_u8Status ;
}
