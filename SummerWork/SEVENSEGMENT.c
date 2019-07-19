/*
 * SEVENSEGMENT.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: jo
 */

#include"TYPES.h"
#include"DIO.h"




/***************************************************************************************/
/* Description! Initializing the Common Anode                                          */
/* Input      ! CommonAnodePortNumber , CommonAnodePortDirection                       */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void SEVENSEGMENT_VidInit(u8 LOC_PowerPort , u8 LOC_PowerPin )
{

	DIO_VidSetPinDirection(LOC_PowerPort , LOC_PowerPin , 1);
	DIO_VidSetPinValue(LOC_PowerPort , LOC_PowerPin , 1);

}

void SEVENSEGMENT_VidEnable(u8 LOC_PowerPort , u8 LOC_PowerPin )
{

	DIO_VidSetPinDirection(LOC_PowerPort , LOC_PowerPin , 1);
	DIO_VidSetPinValue(LOC_PowerPort , LOC_PowerPin , 1);

}



void SEVENSEGMENT_VidDisable(u8 LOC_PowerPort , u8 LOC_PowerPin )
{

	DIO_VidSetPinDirection(LOC_PowerPort , LOC_PowerPin , 1);
	DIO_VidSetPinValue(LOC_PowerPort , LOC_PowerPin , 0);

}





/***************************************************************************************/
/* Description! Printing a number on a specific port                                   */
/* Input      ! PortNumber , number from 0 to 9                                        */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void SEVENSEGMENT_VidPrintNumber( u8 LOC_u8Port , u8 LOC_u8Number )
{

	DIO_VidSetPortDirection( LOC_u8Port, 255);


	switch(LOC_u8Number)
	{

	case 0 : DIO_VidSetPortValue(LOC_u8Port , ~0b00111111 /*~0b01011111*/) ; break ;
	case 1 : DIO_VidSetPortValue(LOC_u8Port , ~0b00000110) ; break ;
	case 2 : DIO_VidSetPortValue(LOC_u8Port , ~0b01011011/*~0b00111011*/) ; break ;
	case 3 : DIO_VidSetPortValue(LOC_u8Port , ~0b01001111/*~0b00101111*/) ; break ;
	case 4 : DIO_VidSetPortValue(LOC_u8Port , ~0b01100110) ; break ;
	case 5 : DIO_VidSetPortValue(LOC_u8Port , ~0b01101101) ; break ;
	case 6 : DIO_VidSetPortValue(LOC_u8Port , ~0b01111101) ; break ;
	case 7 : DIO_VidSetPortValue(LOC_u8Port , ~0b00000111) ; break ;
	case 8 : DIO_VidSetPortValue(LOC_u8Port , ~0b01111111) ; break ;
	case 9 : DIO_VidSetPortValue(LOC_u8Port , ~0b01101111) ; break ;



	}


}







/***************************************************************************************/
/* Description! Clearing a number on a specific port                                   */
/* Input      ! PortNumber                                                             */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void SEVENSEGMENT_VidClearNumber(u8 LOC_u8Port )
{

	DIO_VidSetPortValue(LOC_u8Port , 255);

}

