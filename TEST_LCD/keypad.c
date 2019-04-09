/*
/*
 * Keypad.c
 *
 *  Created on: Jan 8, 2018
 *      Author: Mohamed
 */
#include "KPD_interface.h"

#define Bit_Is_Clear(REG,BIT) (!(REG & (1<<BIT)))

unsigned char  Keypad_GetPressedKey()
{
	unsigned char Col, Row;
	while (1)
	{
		for (Col = 0; Col < N_Col; Col++)
		{
			Keypad_Port_Dir = (0b00010000 << Col);
			Keypad_Port_Out = ~(0b00010000 << Col);

			for (Row = 0; Row < N_Row; Row++)
			{
				if (Bit_Is_Clear(Keypad_Port_In, Row))
				{
					return Keypad_4x3((Row * N_Col) + Col + 1);
				}
			}
		}
	}
}
#if(N_Col == 3)

unsigned char Keypad_4x3(unsigned char Num) {
	switch (Num) {
	case 10:
		return '*';
		break;
	case 11:
		return 0;
		break;
	case 12:
		return '#';
	default:
		return Num;
	}
}
#endif * keypad.c



