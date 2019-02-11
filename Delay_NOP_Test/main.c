/*
 * main.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
#include "ATmega32_Regsiters.h"

void main(void){
	DDRD->ByteAccess=0xFF;
	while(1){
		PORTD->ByteAccess=x01;
		asm("NOP");
		PORTD->ByteAccess=0x00;
	}

}

