/*
 * DIO_prog.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */
#include "STD_TYPES.h"
#include "ATMEGA32_REGISTERES.h"
#include "ATMEGA_CONFIGS.h"

// Define Macros :

#define DIO_MAXPINNB  32
#define DIO_MAXPORTNB 4

// MACROS [---------------------------------should be included here ?-----------------------------]
#define DIO_PIN_INPUT       0
#define DIO_PIN_OUTPUT      1
#define DIO_PORT_OUTPUT     0xFF
#define DIO_PORT_INPUT      0x00
#define DIO_PORT_VALUE_MAX  0xFF
#define DIO_PORT_VALUE_MIN  0x00
// ------------------------------------------------------------------------------------------

#define NUMBER_PINS_IN_PORT 8

#define DDR_A   0
#define DDR_B   1
#define DDR_C   2
#define DDR_D   3

#define PORT_A   0
#define PORT_B   1
#define PORT_C   2
#define PORT_D   3

#define PIN_A   0
#define PIN_B   1
#define PIN_C   2
#define PIN_D   3


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
u8 DIO_u8SetPinDirection(u8 u8PinNB, u8 u8Direction){
	    u8 u8Error=ERROR_OK;
		u8 u8PinId;
		u8 u8PortId;
		if((u8PinNB >= DIO_MAXPINNB) || (u8Direction !=DIO_PIN_OUTPUT && u8Direction != DIO_PIN_INPUT)){
			u8Error = ERROR_NOK;
		}else{

			u8PinId= u8PinNB %  NUMBER_PINS_IN_PORT;
			u8PortId = u8PinNB / NUMBER_PINS_IN_PORT;
			switch (u8PortId){
				case DDR_A :
					ASSIGN_BIT(DDRA->ByteAccess,u8PinId,u8Direction);
				break;
				case DDR_B:
					ASSIGN_BIT(DDRB->ByteAccess,u8PinId,u8Direction);
				break;
				case DDR_C:
					ASSIGN_BIT(DDRC->ByteAccess,u8PinId,u8Direction);
				break;
				case DDR_D:
					ASSIGN_BIT(DDRD->ByteAccess,u8PinId,u8Direction);
				break;
			}

		}
		return u8Error;
}
u8 DIO_u8SetPinValue	(u8 u8PinNB, u8 u8PinValue){
    u8 u8Error=ERROR_OK;
	u8 u8PinId;
	u8 u8PortId;
	if((u8PinNB >= DIO_MAXPINNB) || (u8PinValue !=DIO_PIN_OUTPUT && u8PinValue != DIO_PIN_INPUT)){
		u8Error = ERROR_NOK;
	}else{

		u8PinId= u8PinNB %  NUMBER_PINS_IN_PORT;
		u8PortId = u8PinNB / NUMBER_PINS_IN_PORT;
		switch (u8PortId){
			case PORT_A :
				ASSIGN_BIT(PORTA->ByteAccess,u8PinId,u8PinValue);
			break;
			case PORT_B:
				ASSIGN_BIT(PORTB->ByteAccess,u8PinId,u8PinValue);
			break;
			case PORT_C:
				ASSIGN_BIT(PORTC->ByteAccess,u8PinId,u8PinValue);
			break;
			case PORT_D:
				ASSIGN_BIT(PORTD->ByteAccess,u8PinId,u8PinValue);
			break;
		}

	}
	return u8Error;

}
u8 DIO_u8GetPinValue	(u8 u8PinNB, u8 * pu8PinValue){
	 u8 u8Error=ERROR_OK;
		u8 u8PinId;
		u8 u8PortId;
		if((u8PinNB >= DIO_MAXPINNB) || (pu8PinValue ==NULL)){
			u8Error = ERROR_NOK;
		}else{

			u8PinId= u8PinNB %  NUMBER_PINS_IN_PORT;
			u8PortId = u8PinNB / NUMBER_PINS_IN_PORT;
			switch (u8PortId){
				case PIN_A :
					*pu8PinValue = GET_BIT(PINA->ByteAccess,u8PinId);
				break;
				case PIN_B:
					*pu8PinValue = GET_BIT(PINB->ByteAccess,u8PinId);
				break;
				case PIN_C:
					*pu8PinValue = GET_BIT(PINC->ByteAccess,u8PinId);
				break;
				case PIN_D:
					*pu8PinValue = GET_BIT(PIND->ByteAccess,u8PinId);
				break;
			}

		}
		return u8Error;
}
// Port Functions :
u8 DIO_u8SetPortDirection(u8 u8PortNB, u8 u8Direction){
    u8 u8Error=ERROR_OK;
	if((u8PortNB >= DIO_MAXPORTNB) || (u8Direction <=DIO_PORT_OUTPUT && u8Direction >= DIO_PORT_INPUT)){
		u8Error = ERROR_NOK;
	}else{
		switch (u8PortNB){
			case PORT_A :
				SET_PORT_DIRECTION(PORTA->ByteAccess,u8Direction);
			break;
			case PORT_B:
				SET_PORT_DIRECTION(PORTB->ByteAccess,u8Direction);
			break;
			case PORT_C:
				SET_PORT_DIRECTION(PORTC->ByteAccess,u8Direction);
			break;
			case PORT_D:
				SET_PORT_DIRECTION(PORTD->ByteAccess,u8Direction);
			break;
		}

	}
	return u8Error;
}
u8 DIO_u8SetPortnValue	(u8 u8PortNB, u8 u8PortValue){
    u8 u8Error=ERROR_OK;
	if((u8PortNB >= DIO_MAXPORTNB) || (u8PortValue <=DIO_PORT_VALUE_MAX && u8PortValue >= DIO_PORT_VALUE_MIN)){
		u8Error = ERROR_NOK;
	}else{
		switch (u8PortNB){
			case PORT_A :
				SET_PORT_VALUE(PORTA->ByteAccess,u8PortValue);
			break;
			case PORT_B:
				SET_PORT_VALUE(PORTB->ByteAccess,u8PortValue);
			break;
			case PORT_C:
				SET_PORT_VALUE(PORTC->ByteAccess,u8PortValue);
			break;
			case PORT_D:
				SET_PORT_VALUE(PORTD->ByteAccess,u8PortValue);
			break;
		}

	}
	return u8Error;
}
u8 DIO_u8GetPortnValue	(u8 u8PortNB, u8 * pu8PortValue){
	u8 u8Error=ERROR_OK;
	if((u8PortNB >= DIO_MAXPORTNB) ){
		u8Error = ERROR_NOK;
	}else{
		switch (u8PortNB){
			case PORT_A :
				*pu8PortValue = PINA->ByteAccess;
			break;
			case PORT_B:
				*pu8PortValue = PINB->ByteAccess;
			break;
			case PORT_C:
				*pu8PortValue = PINC->ByteAccess;
			break;
			case PORT_D:
				*pu8PortValue = PIND->ByteAccess;
			break;
		}

	}
	return u8Error;
}


