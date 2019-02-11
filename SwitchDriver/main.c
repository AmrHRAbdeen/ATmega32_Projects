/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "SSD_interface.h"
#include <util/delay.h>

int main(void){

	// set direction
	DIO_voidInit();

	while(1)
	{
		SSD_u8SetOff(2);
		SSD_u8SetOn(1);
		SSD_u8SetValue(1,9);

		_delay_ms(10);

		SSD_u8SetOff(1);
		SSD_u8SetOn(2);
		SSD_u8SetValue(2,3);

		_delay_ms(10);
	}


	return 0 ;
}

