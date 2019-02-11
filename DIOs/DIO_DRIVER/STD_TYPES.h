/*
 * STD_TYPES.h
 *
 *  Created on: Jan 29, 2019
 *      Author: Killua
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_



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

// ERROR STATE
#define ERROR_NOK 1
#define ERROR_OK  0
#define NULL  ((void *)0)




#endif /* STD_TYPES_H_ */
