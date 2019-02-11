/**********************************************************************************/
/* Author : Amr Abdeen                                                            */
/* Date   : 31 Jan. 2019                                                          */
/* Version: V01                                                                   */
/**********************************************************************************/
/* Description:                                                                   */
/*-------------                                                                   */
/* BIT_CALC_H is a header file resposible for diferent Bit Manipulation           */ 
/* operations                                                                     */
/**********************************************************************************/


#ifndef BIT_CALC_H_
#define BIT_CALC_H_


/*Set specific bit in a specific port*/
#define BIT_CALC_SET_BIT(PORT,BIT_NO) (PORT)|=(TRUE<<(BIT_NO))
/*Clear specific bit in a specific port*/
#define BIT_CALC_CLEAR_BIT(PORT,BIT_NO) (PORT) &=~(TRUE<<(BIT_NO))
/*Toggle specific bit in a specific port*/
#define BIT_CALC_TOGGLE_BIT(PORT,BIT_NO) (PORT)^=(TRUE<<(BIT_NO))
/*Assign specific bit in a specific port with a specific value*/
#define BIT_CALC_ASSIGN_BIT(PORT,BIT_NO,VAL) do{\
    if(VAL!=FALSE && VAL != TRUE) VAL=FALSE; \
    (PORT)=((PORT)&(~(TRUE<<(BIT_NO))))|((VAL)<<(BIT_NO));\
    }while(FALSE)
/*Set Low nibble in a specific port*/
#define BIT_CALC_SET_LOW_NIBBLE(PORT) (PORT)|=0x0F
/*Set High nibble in a specific port*/
#define BIT_CALC_SET_HIGH_NIBBLE(PORT) (PORT)|=0xF0
/*Clear Low nibble in a specific port*/
#define BIT_CALC_CLEAR_LOW_NIBBLE(PORT) (PORT)&=0xF0
/*Clear High nibble in a specific port*/
#define BIT_CALC_CLEAR_HIGH_NIBBLE(PORT) (PORT)&=0x0F
/*Toggle Low nibble in a specific port*/
#define BIT_CALC_TOGGLE_LOW_NIBBLE(PORT) (PORT)^=0x0F
/*Toggle High nibble in a specific port*/
#define BIT_CALC_TOGGLE_HIGH_NIBBLE(PORT) (PORT)^=0xF0
/*Get specific bit in a specific port*/
#define BIT_CALC_GET_BIT(PORT,BIT_NO) (PORT)=((PORT)>>(BIT_NO))&0x01
/*Set port direction*/
#define BIT_CALC_SET_PORT_DIRECTION(PORT,DIRECTION) (PORT)=(DIRECTION)
/*Set port value*/
#define BIT_CALC_SET_PORT_VALUE(PORT,VALUE) (PORT)=(VALUE)

#endif // STD_TYPES_H_INCLUDED
