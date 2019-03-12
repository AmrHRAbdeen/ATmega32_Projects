/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
#include"BIT_CALC.h"

#include "DIO_interface.h"
//#include <util/delay.h>
#include"DelayMs.h"
#include"KPD_interface.h"


int main(void){
	u8 keypad_Status[KPD_NUM_OF_INPUTS * KPD_NUM_OF_OUTPUTS];
	DIO_voidInit();

	KPD_u8GetKeysState(keypad_Status);

	for(int  i = 0 ; i < 8; i++){
		DIO_u8SetPinValue(24+i,keypad_Status[i]);
	}


	return 0 ;
}

