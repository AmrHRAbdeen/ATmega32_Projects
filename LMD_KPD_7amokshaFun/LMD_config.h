/*
 * LMD_config.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Mina Nabil
 */

/* Pulic configurations*/
#ifdef LMD_INTERFACE_H_

#ifndef LMD_PUBLIC_CONFIG_H_
#define LMD_PUBLIC_CONFIG_H_

//#define LMD_NUM_OF_LMD 1

#define LMD_PATTERN_SIZE       8

#endif
#endif


/* Private configurations*/
#ifdef LMD_PRIVATE_H_

#ifndef LMD_PRIVATE_CONFIG_H_
#define LMD_PRIVATE_CONFIG_H_

#define LMD_ACTIVE_SIZE        8
#define LMD_NUMBER_OF_COLORS   2

u8 LMD_Au8ActiveConnection[LMD_ACTIVE_SIZE]={
	DIO_u8_PIN0,
	DIO_u8_PIN1
}

u8 LMD_Au8PatternConnection[LMD_NUMBER_OF_COLORS][LMD_PATTERN_SIZE]={
	{DIO_u8_PIN0,DIO_u8_PIN1},
	{DIO_u8_PIN2,DIO_u8_PIN3},
}



#define LMD_u8_TYPE                	    LMD_u8_ACTIVE_HIGH


#endif /* KPD_CONFIG_H_ */
#endif
