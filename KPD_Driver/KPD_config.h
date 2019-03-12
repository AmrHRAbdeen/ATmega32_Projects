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
#define KPD_NUM_OF_INPUTS 3
#define KPD_NUM_OF_OUTPUTS 3

#endif
#endif



#ifdef KPD_PRIVATE_H_

#ifndef KPD_PRIVATE_CONFIG_H_
#define KPD_PRIVATE_CONFIG_H_


#define KPD_TYPE KPD_u8_PULL_UP

u8 KPD_Au8KpdInputConnection[KPD_NUM_OF_INPUTS]=
{
		DIO_u8_PIN0,
		DIO_u8_PIN1,
		DIO_u8_PIN2,
		DIO_u8_PIN3

};
u8 KPD_Au8KpdOutputConnection[KPD_NUM_OF_OUTPUTS]=
{

		DIO_u8_PIN4,
		DIO_u8_PIN5,
		DIO_u8_PIN6,
		DIO_u8_PIN7,
};

#endif /* KPD_CONFIG_H_ */
#endif
