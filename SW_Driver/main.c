/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "SWI_interface.h"
#include <util/delay.h>

int main(void){

	/* Set direction */
	DIO_voidInit();
	while(1)
	{
		DIO_u8SetPinValue(DIO_u8_PIN0,DIO_u8_PIN_HIGH);
	}

	return 0 ;
}

