/*
 * ADC_main.c
 *
 *  Created on: Apr 10, 2019
 *      Author: Amr Abdeen
 */
/*AVR ADC: is a 10 bit ADC controlled by : 5 Registers
 *
 * 1- ADCH (0x25)
 * 2- ADCL (0x24)
 * 3- ADCSRA (0x26)
 * 4- ADCMUX (0x27)
 * 5- SPIOR
 *--------------------------------
 *ADC Circuit:
 *-------------
 * AVCC => Supply for Analog ADC Circuit (It should be externally connected to VCC even if the ADC is not working)
 * Vref. => for the internal DAC as it's a SAR ADC
 * 			it can be:
 * 				1- Vref pin connected to AVCC (Vref = AVCC).
 * 				2- Vref is used internally (2.56 V).
 * 				3- Vref. is provided from Vref. pin.
 *
 *
 *
 *
 *
 *
 *
 * */

#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include <util/delay.h>
#include <avr/io.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****ADC_Registers******************
#define AVR_ADCH   ((Register*) 0x25)
#define AVR_ADCL   ((Register*) 0x24)
#define AVR_ADCSRA ((Register*) 0x26)
#define AVR_ADCMUX ((Register*) 0x27)
************************************/

int main(void)
{
	u16 ADC_value=0;
	u8 *PTR=(u8*)&ADC_value;
	char snum[100];
	DDRA=0x00; /*Make PortA as input*/

	ADMUX=0xC0; /*2.56 Vref , ADC single Ended input (one channel) , Data will be right Adjusted*/
	LCD_Init();

while(1)
{
	ADCSRA=0x87; /*Make ADC enabled and select clk/128*/
	ADCSRA |=(1<<ADSC); /*Start Conversion*/
	while((ADCSRA&(1<<ADIF)) == 0); /*Wait for conversion to finish*/
	*PTR = ADCL;
	*(PTR+1) = ADCH;
	// convert 123 to string [buf]
	sprintf(snum, "%d", ADC_value);
	LCD_String_xy(0,0,snum);

}
	return 0;

}


