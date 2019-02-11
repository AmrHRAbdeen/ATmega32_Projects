/*
 * LED_interface.h
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
//  DIO_u8SetPinValue	(u8 u8PinNB, u8 u8PinValue);
#include "STD_TYPES.h"
u8 u8_LedOn(u8 u8PinNB);
u8 u8_LedOff(u8 u8PinNB);

#endif /* LED_INTERFACE_H_ */
