/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
//#include "delay_ms_interface.h"
#include "DIO_interface.h"
#include "SSD_interface.h"

#include <util/delay.h>

int main(void){


	DIO_voidInit();


	SSD_u8SetOff(1);
	SSD_u8SetOff(2);
	SSD_u8SetOff(3);
	SSD_u8SetOff(4);
	while(1)
	{
		SSD_u8SetOn(1);
		SSD_u8SetValue(1,10);
		_delay_ms(100);
		SSD_u8SetOff(1);
		/******************************/
		SSD_u8SetOn(2);
		SSD_u8SetValue(2,10);
		_delay_ms(100);
		SSD_u8SetOff(2);
		/******************************/
		SSD_u8SetOn(3);
		SSD_u8SetValue(3,10);
		_delay_ms(100);
		SSD_u8SetOff(3);
		/******************************/
		SSD_u8SetOn(4);
		SSD_u8SetValue(4,10);
		_delay_ms(100);
		SSD_u8SetOff(4);
		/******************************/
		SSD_u8SetOn(4);
		SSD_u8SetValue(4,15);
		_delay_ms(100);
		SSD_u8SetOff(4);
		/******************************/
		SSD_u8SetOn(4);
		SSD_u8SetValue(4,14);
		_delay_ms(100);
		SSD_u8SetOff(4);
		/******************************/
		SSD_u8SetOn(4);
		SSD_u8SetValue(4,13);
		_delay_ms(100);
		SSD_u8SetOff(4);
		/******************************/
		SSD_u8SetOn(3);
		SSD_u8SetValue(3,13);
		_delay_ms(100);
		SSD_u8SetOff(3);
		/******************************/
		SSD_u8SetOn(2);
		SSD_u8SetValue(2,13);
		_delay_ms(100);
		SSD_u8SetOff(2);
		/******************************/
		SSD_u8SetOn(1);
		SSD_u8SetValue(1,13);
		_delay_ms(100);
		SSD_u8SetOff(1);
		/******************************/
		SSD_u8SetOn(1);
		SSD_u8SetValue(1,12);
		_delay_ms(100);
		SSD_u8SetOff(1);
		/******************************/
		SSD_u8SetOn(1);
		SSD_u8SetValue(1,11);
		_delay_ms(100);
		SSD_u8SetOff(1);
		/******************************/
	}
	return 0 ;
}

