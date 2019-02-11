/*
************************************
Standard Data Types
Check for every tool chain first...
Author : Amr Abdeen
************************************
*/
#ifndef STD_TYPES_H_INCLUDED
#define STD_TYPES_H_INCLUDED

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

/*Error States*/
#define ERROR_NOT_OK 1
#define ERROR_OK     0
#define NULL         ((void*)0)


/*Functions Prototype*/
void delay_millisecond(u16 value);

#endif // STD_TYPES_H_INCLUDED
