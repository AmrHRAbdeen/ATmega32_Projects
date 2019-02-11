/*
************************************
ATmega32 Configurations Header File
Author : Amr Abdeen
************************************
*/
#ifndef SEVENSEG_CONFIG_H_
#define SEVENSEG_CONFIG_H_

/*7 Segment Configurations*/
#define ZERO_SEVEN_SEG       0x77
#define ONE_SEVEN_SEG        0x41
#define TWO_SEVEN_SEG        0x6E
#define THREE_SEVEN_SEG      0x6B
#define FOUR_SEVEN_SEG       0x59
#define FIVE_SEVEN_SEG       0x3B
#define SIX_SEVEN_SEG        0x3F
#define SEVEN_SEVEN_SEG      0x61
#define EIGHT_SEVEN_SEG      0xFF
#define NINE_SEVEN_SEG       0x7B

#define SEVEN_SEG_PORT_DIR DDRB->ByteAccess
#define SEVEN_SEG_PORT PORTB->ByteAccess

/*Multiplexing delay time in milliseconds*/
#define MUX_DELAY            1000
#define SEVEN_SEG_DELAY      1000
#endif
