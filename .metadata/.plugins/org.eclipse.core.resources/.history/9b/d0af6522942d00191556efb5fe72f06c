/**************************************************/
/* Author      :  Amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/

#ifndef SSD_PRIVATE_H_
#define SSD_PRIVATE_H_

/*7 Segment Configurations for common cathode*/


#define ZERO_SEVEN_SEG    0b1111110
#define ONE_SEVEN_SEG     0b1100000
#define TWO_SEVEN_SEG     0b1101101
#define THREE_SEVEN_SEG   0b1111001
#define FOUR_SEVEN_SEG    0b0110011
#define FIVE_SEVEN_SEG    0b1011011
#define SIX_SEVEN_SEG     0b1011111
#define SEVEN_SEVEN_SEG   0b1110000
#define EIGHT_SEVEN_SEG   0b1111111
#define NINE_SEVEN_SEG    0b1111011

#define SSD_u8_MAX_NUM    (u8)17

#define SSD_STATUS_ON     (u8)1
#define SSD_STATUS_OFF    (u8)0

#define SSD_u8_LOOP_START_INDEX 0
#define SSD_u8_LOOP_END         7

u8 SSD_Au8SsdNumbers[SSD_u8_MAX_NUM][7]={
/*0=0b1111110*/
{1,1,1,1,1,1,0},

/*1=0b1100000*/
{0,1,1,0,0,0,0},//bc

/*2=0b1101101*/
{1,1,0,1,1,0,1},//abged

/*3=0b1111001*/
{1,1,1,1,0,0,1},//abgcd

/*4=0b0110011*/
{0,1,1,0,0,1,1},//fgbc

/*5=0b1011011*/
{1,0,1,1,0,1,1},

/*6=0b1011111*/
{1,0,1,1,1,1,1},//afedcg

/*7=0b1110000*/
{1,1,1,0,0,0,0},

/*8=0b1111111*/
{1,1,1,1,1,1,1},

/*9=0b1111011*/
{1,1,1,1,0,1,1},//afgbcd

/*A segment*/
{1,0,0,0,0,0,0},
/*B Segment*/
{0,1,0,0,0,0,0},
/*C Segment*/
{0,0,1,0,0,0,0},
/*D Segment*/
{0,0,0,1,0,0,0},
/*E Segment*/
{0,0,0,0,1,0,0},
/*F Segment*/
{0,0,0,0,0,1,0},
/*G Segment*/
{0,0,0,0,0,0,1},
};

u8 SSD_Au8SsdNumbersAnode[SSD_u8_MAX_NUM][7]={
{1,0,0,0,0,0,0},
{1,0,0,1,1,1,1},
{0,1,0,0,1,0,0},
{0,1,1,0,0,0,0},
{0,0,1,1,0,0,1},
{0,0,1,0,0,1,0},
{0,0,0,0,0,1,0},
{1,1,1,1,0,0,0},
{0,0,0,0,0,0,0},
{0,0,1,0,0,0,0}
};


u8 SSD_Au8SsdStatus[SSD_NO_OF_SSD]={
	SSD_STATUS_OFF,
	SSD_STATUS_OFF
};

#define ARRAY_START_INDEX (u8)1


#endif /* SSD_PRIVATE_H_ */
