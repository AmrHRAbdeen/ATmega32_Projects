/**********************************************************/
/* Author      :  Amr Abdeen                              */
/* Date        : 7/2/2019                                 */
/* Description :   Stepper Motor Control Test Code        */
/**********************************************************/

/****** Circuit Using ULN2003 ( Darlington Pair IC)********/

/* Stepper Motor Used is : Hobbiest Stepper Motor
	 *
	 * Wiring:
	 * --------
	 * ULN2003 ---> uC
	 * ---------------------
	 * 	GND       ---> GND
	 * 	IN-PIN1   ---> PORTA0
	 * 	IN-PIN2   ---> PORTA1
	 * 	IN-PIN3   ---> PORTA2
	 *  IN-PIN4   ---> PORTA3
	 *==========================
	 * Stepper Motor Connection:-
	 *---------------------------
	 * ULN2003  ----> MOTOR
	 * OUT-PIN1 ----> YELLOW WIRE
	 * OUT-PIN2 ----> ORANGE WIRE
	 * OUT-PIN3 ----> BLUE   WIRE
	 * OUT-PIN4 ----> PINK   WIRE
	 * ---------------------------
/**************************************************/

#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "delay_ms_interface.h"

int main(void){

	DIO_voidInit();
	while(1)
	{
		DIO_u8SetPortnValue(0,0xFE);
		delay_milliSecond(4);
		DIO_u8SetPortnValue(0,0xFD);
		delay_milliSecond(4);
		DIO_u8SetPortnValue(0,0xFB);
		delay_milliSecond(4);
		DIO_u8SetPortnValue(0,0xF7);
		delay_milliSecond(4);
	}
	return 0 ;
}

