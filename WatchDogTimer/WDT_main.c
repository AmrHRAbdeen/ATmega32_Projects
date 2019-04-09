/*
 * WDT_main.c
 *
 *  Created on: Apr 9, 2019
 *      Author: Amr Abdeen
 Discription: Watchdog Test code
 */
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "DIO_interface.h"
#include <util/delay.h>

#define WDTCR  ((Register*)                   0x41)

int main(void)
{
	DIO_voidInit();
	DIO_u8SetPinValue(0,1);
	_delay_ms(2000);
	DIO_u8SetPinValue(0,0);
	_delay_ms(2000);
	/*WDT Code*/
	WDTCR->ByteAccess = 0x0F;
	while(1);
	return 0;
}




