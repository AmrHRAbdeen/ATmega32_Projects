/*
 * SW_config.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Amr Abdeen
 */

#ifndef SW_CONFIG_H_
#define SW_CONFIG_H_



#define SW_TYPE SW_PULL_UP
#define SW_PIN  DIO_u8_PIN1

#define SW_u8_NUM_OF_SW  1

/*Range:               */
/* SW_PULL_UP          */
/* SW_PULL_DOWN         */

u8 SWI_Au8SWTypes[SW_u8_NUM_OF_SW]=
{
		SW_PULL_DOWN
};

u8 SWI_Au8SWChannels[SW_u8_NUM_OF_SW]=
{
	DIO_u8_PIN10
};
#endif /* SW_CONFIG_H_ */
