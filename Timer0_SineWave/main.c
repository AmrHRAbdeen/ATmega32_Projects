/*
 * main.c
 *
 *  Created on: Mar 27, 2019
 *      Author: Amr Abdeen
 */
#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "song.h"

#define PRELOAD      150
#define OVF_COUNTS   1000

int i=0;
void TIM0_Confg(void);
u8 Flag=0;
u16 Counter=0;
u16 OVFCOUNTER=0;

int main(void)
{
	DDRD=0xFF;
	TIM0_Confg();
	while(1);

	return 0;
}
void TIM0_Confg(void)
{
	TCNT0 =PRELOAD;
	TCCR0=0x02;
	TIMSK |=0x01;
	SREG|=0x80;
}

/*Timer Interrupt 0*/
void __vector_11(void) __attribute__((signal));
/*Timer Interrupt Function*/
void __vector_11(void)
{

	asm("LPM %0,Z""\n\t"":=r"(PORTD):"z"(&song[i]));
	if(i == 24242)
	{
		i=0;
	}

	/*if(Counter<255 && Flag==0)
		{
			PORTD=Counter;
			TCNT0 =PRELOAD;
			++Counter;
			if(Counter ==255) Flag=1;
		}

		if(Flag==1)
		{
			PORTD=Counter--;
			TCNT0 =PRELOAD;
			if(Counter ==0) Flag=0;
		}*/
}
