/*
************************************
ATmega32 Configurations Header File
Author : Amr Abdeen
************************************
*/
#ifndef SEVENSEG_CONFIG_H_
#define SEVENSEG_CONFIG_H_

#define NINE_SEVEN_SEG  0x7B
#define THREE_SEVEN_SEG 0xEB
#define SEVEN_SEG_PORT_DIR DDRB->ByteAccess
#define SEVEN_SEG_PORT PORTB->ByteAccess
/*Multiplexing delay time in milliseconds*/
#define MUX_DELAY 10
#endif
