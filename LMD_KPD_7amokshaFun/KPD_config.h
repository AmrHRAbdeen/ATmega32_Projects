/*
 * SWITCH_config.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Monika Ossama
 */

#ifdef KPD_INTERFACE_H_

#ifndef KPD_PUBLIC_CONFIG_H_
#define KPD_PUBLIC_CONFIG_H_

//#define SWITCH_NUM_OF_KEYPADS 1
#define KPD_NUM_OF_INPUTS 4
#define KPD_NUM_OF_OUTPUTS 4

#endif
#endif



#ifdef KPD_PRIVATE_H_

#ifndef KPD_PRIVATE_CONFIG_H_
#define KPD_PRIVATE_CONFIG_H_


#define KPD_TYPE KPD_u8_PULL_UP

u8 KPD_Au8KpdInputConnection[KPD_NUM_OF_INPUTS]=
{
		DIO_u8_PIN19,
		DIO_u8_PIN18,
		DIO_u8_PIN17,
		DIO_u8_PIN16

};
u8 KPD_Au8KpdOutputConnection[KPD_NUM_OF_OUTPUTS]=
{

		DIO_u8_PIN23,
		DIO_u8_PIN22,
		DIO_u8_PIN21,
		DIO_u8_PIN20
};

#endif /* KPD_CONFIG_H_ */
#endif
