/*
 * DIO_interface.h
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "STD_TYPES.h"
/*
 * Functions :
 * 	  Pin Functions :
 * 		u8 DIO_u8SetPinDirection(u8 u8PinNB, u8 u8Direction)
 * 		u8 DIO_u8SetPinValue	(u8 u8PinNB, u8 u8PinValue)
 * 		u8 DIO_u8GetPinValue	(u8 u8PinNB, u8 * pu8PinValue)
 * 	  Port Functions :
 * 	  	u8 DIO_u8SetPortDirection(u8 u8PortNB, u8 u8Direction)
 * 		u8 DIO_u8SetPortnValue	(u8 u8PortNB, u8 u8PortValue)
 * 		u8 DIO_u8GetPortnValue	(u8 u8PinNB, u8 * pu8PortValue)
 *
 */


//Pin Functions :
u8 DIO_u8SetPinDirection(u8 u8PinNB, u8 u8Direction);

u8 DIO_u8SetPinValue(u8 u8PinNB, u8 u8PinValue);

u8 DIO_u8GetPinValue(u8 u8PinNB, u8 * pu8PinValue);
// Port Functions :
u8 DIO_u8SetPortDirection(u8 u8PortNB, u8 u8Direction);

u8 DIO_u8SetPortnValue(u8 u8PortNB, u8 u8PortValue);

u8 DIO_u8GetPortnValue(u8 u8PinNB, u8 * pu8PortValue);







#endif /* DIO_INTERFACE_H_ */
