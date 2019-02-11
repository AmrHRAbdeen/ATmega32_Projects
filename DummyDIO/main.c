/*
 * main.c
 *
 *  Created on: Feb 9, 2019
 *      Author: Amr Abdeen
 */
#include <avr/io.h>

#include <util/delay.h>
/******************************************************/
typedef unsigned char      u8 ;
typedef unsigned short int u16;
typedef unsigned long int  u32;
typedef signed char        s8 ;
typedef signed short int   s16;
typedef signed long int    s32;
typedef float              f32;
typedef long               f64;

typedef union {
	struct {
		u8 Bit0:1;
		u8 Bit1:1;
		u8 Bit2:1;
		u8 Bit3:1;
		u8 Bit4:1;
		u8 Bit5:1;
		u8 Bit6:1;
		u8 Bit7:1;
	} BitAccess;

	u8 ByteAccess;

}Register;
#define myPINA  ((Register*)                   0x39)

/******************************************************/
int main(void)
{
	DDRA=0xFF;
	DDRB=0xFF;
	DDRC=0xFF;
	DDRD=0xFF;
	while(1)
	{
		PORTA=0xFF;
		PORTB=0xFF;
		PORTC=0xFF;
		PORTD=0xFF;
	}
return 0;
}


