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
#include "KPD_interface.h"

#define JumpKey     		 5
#define WakeUpKey      		 1
#define SleepKey      		 9
#define RightKey      		 4
#define LeftKey      	 	 4
#define NumberOFPics     	 9
#define JumpNumberOFPics     3

int main(void){
	//u8 u8LoopIndex;
	u8 keypad_Status[KPD_NUM_OF_INPUTS * KPD_NUM_OF_OUTPUTS];
	DIO_voidInit();
	LCD_Init();			/* Initialization of LCD*/

	while(1)
	{
		KPD_u8GetKeysState(keypad_Status);
		if(keypad_Status[JumpKey]==KPD_u8_PRESSED){
			LCD_String_xy(0,0,"5");
		}
		else if(keypad_Status[RightKey]==KPD_u8_PRESSED){
			LCD_String_xy(0,0,"4");
		}
		else if(keypad_Status[LeftKey]==KPD_u8_PRESSED){

		}
		else if(keypad_Status[SleepKey]==KPD_u8_PRESSED){

		}
		else if(keypad_Status[WakeUpKey]==KPD_u8_PRESSED){


		}
		else{

		}

	}

	return 0 ;
}

