/*
 * Keypad.h
 *
 *  Created on: Jan 8, 2018
 *      Author: Mohamed
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_


#include "Std_Types.h"
#include <avr/io.h>

#define Keypad_Port_Dir DDRA
#define Keypad_Port_Out PORTA
#define Keypad_Port_In PINA
#define N_Col 3
#define N_Row 4

unsigned char Keypad_GetPressedKey();
unsigned char Keypad_4x3(unsigned char Num);


#endif /* KEYPAD_H_ */
