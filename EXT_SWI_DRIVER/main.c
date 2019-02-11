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
	SWI_u8Init();
	u8 Local_SWReadVal1;

	while(1)
	{

		SWI_u8GetSWIState(1,&Local_SWReadVal1);

		if(Local_SWReadVal1 == SWI_PRS)
		{
			DIO_u8SetPinValue(DIO_u8_PIN5,DIO_u8_PIN_HIGH);
		}
		else if ( Local_SWReadVal1 == SWI_REL)
		{
			DIO_u8SetPinValue(DIO_u8_PIN5,DIO_u8_PIN_LOW);
		}

	}

	return 0 ;
}

