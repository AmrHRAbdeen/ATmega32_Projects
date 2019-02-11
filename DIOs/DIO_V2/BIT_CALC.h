/*
 * BIT_CALC.h
 *
 *  Created on: Jan 31, 2019
 *      Author: Amr Abdeen
 */

#ifndef BIT_CALC_H_
#define BIT_CALC_H_

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

#define SET_PORT_DIRECTION(PORT,DIRECTION) (PORT)=(DIRECTION)

#define SET_PORT_VALUE(PORT,VALUE) (PORT)=(VALUE)

#endif /* BIT_CALC_H_ */
