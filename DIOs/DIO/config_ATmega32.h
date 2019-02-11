/*
************************************
ATmega32 Conigurations Header File
Author : Amr Abdeen
************************************
*/
#ifndef CONFIG_ATMEGA32_H_
#define CONFIG_ATMEGA32_H_

/*Determine your ATmega's operating Frequency*/
#define F_CPU 8000000UL /*Suffix is used to tell the preprocessor and the Compiler that is a Unsigned Long Number */

/*Ports Configurations*/
#define PORT_OUTPUT 0xFF
#define PORT_INPUT 0x00
#define PORT_HIGH 0xFF
#define PORT_LOW 0xFF

/*Booleans*/
#define TRUE 1
#define FALSE 0

/*Bit Manipulation APIs*/
#define SET_BIT(PORT,BIT_NO) (PORT)|=(TRUE<<(BIT_NO))

#define CLEAR_BIT(PORT,BIT_NO) (PORT) &=~(TRUE<<(BIT_NO))

#define TOGGLE_BIT(PORT,BIT_NO) (PORT)^=(TRUE<<(BIT_NO))

#define ASSIGN_BIT(PORT,BIT_NO,VAL) do{\
    if(VAL!=FALSE && VAL != TRUE) VAL=FALSE; \
    (PORT)=((PORT)&(~(TRUE<<(BIT_NO))))|((VAL)<<(BIT_NO));\
    }while(FALSE)

#define SET_LOW_NIBBLE(PORT) (PORT)|=0x0F

#define SET_HIGH_NIBBLE(PORT) (PORT)|=0xF0

#define CLEAR_LOW_NIBBLE(PORT) (PORT)&=0xF0

#define CLEAR_HIGH_NIBBLE(PORT) (PORT)&=0x0F

#define TOGGLE_LOW_NIBBLE(PORT) (PORT)^=0x0F

#define TOGGLE_HIGH_NIBBLE(PORT) (PORT)^=0xF0

#define GET_BIT(PORT,BIT_NO) (PORT)=((PORT)>>(BIT_NO))&0x01

#define SET_PORT_DIR(PORT,DIR) (PORT)=(DIR)




#endif // STD_TYPES_H_INCLUDED
