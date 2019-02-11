/*
************************************
ATmega32 Registers Header File
Author : Amr Abdeen
************************************
*/

#ifndef ATMEGA32_REGISSTERS_H_
#define ATMEGA32_REGISSTERS_H_

#define DDRA ((Register*)  0x3A)
#define PORTA ((Register*) 0x3B)
#define PINA  ((Register*) 0x39)

#define DDRB ((Register*)  0x37)
#define PORTB ((Register*) 0x38)
#define PINB  ((Register*) 0x36)

#define DDRC  ((Register*) 0x34)
#define PORTC ((Register*) 0x35)
#define PINC  ((Register*) 0x33)

#define DDRD  ((Register*) 0x31)
#define PORTD ((Register*) 0x32)
#define PIND  ((Register*) 0x30)



/*Ports Configurations*/
#define PORT_OUTPUT 0xFF
#define PORT_INPUT 0x00
#define PORT_HIGH 0xFF
#define PORT_LOW 0xFF

/*Booleans*/
#define TRUE 1
#define FALSE 0


/*Functions Prototype*/
void delay_millisecond(u16 value);



#endif // STD_TYPES_H_INCLUDED
