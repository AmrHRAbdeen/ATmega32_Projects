/*
 `* DIO_prog.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "ATMEGA32_REGISTERS.h"

#include "config_ATmega32.h"

#define NUMBER_OF_PINS_IN_PORT 8

#define PORT_ONE     0
#define PORT_TWO     1
#define PORT_THREE   2
#define PORT_FOUR    3
#define NUM_OF_PORTS 4

#define DIO_MAXPINNB 32

/* Description : Setting bit direction
 * Inputs: u8PinNB: Pin Number
 * 		   u8Direction: INPUT / OUTPUT
 * OUtputs: Error State (1 ERROR FOUND , 0 NO ERROR)
*/
u8 DIO_u8SetPinDirection(u8 u8PinNB,u8 u8Direction)
{
	/*Local Variables*/
	u8 u8ErrorState;
	u8 u8PinId;
	u8 u8PortId;
	/*Inputs validation*/
	if(u8PinNB>=DIO_MAXPINNB || ((u8Direction!=DIO_OUTPUT) && (u8Direction!=DIO_INPUT)))
	{
		u8ErrorState=ERROR_NOT_OK;
	}
	else
	{
		/*if pinNo is 18 so (pin No)18/(No of pins)8 => 2(2/8) so Port 2 (starting from port 0) and
		 * pinNo is 2 starting from pin0 in port2
		 * */
		u8PortId=u8PinNB / NUMBER_OF_PINS_IN_PORT;

		u8PinId=u8PinNB % NUMBER_OF_PINS_IN_PORT;

		switch(u8PortId)
		{
			case PORT_ONE:
			{
				ASSIGN_BIT(DDRA->ByteAccess,u8PinId,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			case PORT_TWO:
			{
				ASSIGN_BIT(DDRB->ByteAccess,u8PinId,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			case PORT_THREE:
			{
				ASSIGN_BIT(DDRC->ByteAccess,u8PinId,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			case PORT_FOUR:
			{
				ASSIGN_BIT(DDRD->ByteAccess,u8PinId,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			default:
				u8ErrorState=ERROR_NOT_OK;
		}

	}

	/*Function return*/
	return u8ErrorState;
}

u8 DIO_u8SetPinValue(u8 u8PinNB,u8 u8Value)
{
	/*Local Variables*/
		u8 u8ErrorState;
		u8 u8PinId;
		u8 u8PortId;
		/*Inputs validation*/
		if(u8PinNB>=DIO_MAXPINNB || ((u8Value!=DIO_OUTPUT) && (u8Value!=DIO_INPUT)))
		{
			u8ErrorState=ERROR_NOT_OK;
		}
		else
		{
			/*if pinNo is 18 so (pin No)18/(No of pins)8 => 2(2/8) so Port 2 (starting from port 0) and
			 * pinNo is 2 starting from pin0 in port2
			 * */
			u8PortId=u8PinNB / NUMBER_OF_PINS_IN_PORT;

			u8PinId=u8PinNB % NUMBER_OF_PINS_IN_PORT;

			switch(u8PortId)
			{
				case PORT_ONE:
				{
					ASSIGN_BIT(PORTA->ByteAccess,u8PinId,u8Value);
					u8ErrorState=ERROR_OK;
				}
				break;

				case PORT_TWO:
				{
					ASSIGN_BIT(PORTB->ByteAccess,u8PinId,u8Value);
					u8ErrorState=ERROR_OK;
				}
				break;

				case PORT_THREE:
				{
					ASSIGN_BIT(PORTC->ByteAccess,u8PinId,u8Value);
					u8ErrorState=ERROR_OK;
				}
				break;

				case PORT_FOUR:
				{
					ASSIGN_BIT(PORTD->ByteAccess,u8PinId,u8Value);
					u8ErrorState=ERROR_OK;
				}
				break;

				default:
					u8ErrorState=ERROR_NOT_OK;
			}

		}

		/*Function return*/
		return u8ErrorState;
}

u8 DIO_u8GetPinValue(u8 u8PinNB,u8* pu8Value)
{
	u8 u8ErrorState;
	u8 u8PinId;
	u8 u8PortId;
	u8PortId=u8PinNB / NUMBER_OF_PINS_IN_PORT;
	u8PinId=u8PinNB % NUMBER_OF_PINS_IN_PORT;

	if(pu8Value == NULL)
	{
		u8ErrorState=ERROR_NOT_OK;
	}
	else
	{
		/*Switch Case*/
		switch(u8PortId)
					{
						case PORT_ONE:
						{
							*pu8Value=GET_BIT(PINA->ByteAccess,u8PinId);
							u8ErrorState=ERROR_OK;
						}
						break;

						case PORT_TWO:
						{
							*pu8Value=GET_BIT(PINA->ByteAccess,u8PinId);
							u8ErrorState=ERROR_OK;
						}
						break;

						case PORT_THREE:
						{
							*pu8Value=GET_BIT(PINA->ByteAccess,u8PinId);
							u8ErrorState=ERROR_OK;
						}
						break;

						case PORT_FOUR:
						{
							*pu8Value=GET_BIT(PINA->ByteAccess,u8PinId);
							u8ErrorState=ERROR_OK;
						}
						break;

						default:
							u8ErrorState=ERROR_NOT_OK;
					}

		u8ErrorState=ERROR_OK;
	}
	return u8ErrorState;
}
/**************************************************************************************/
/*PORTS*/

u8 DIO_u8SetPortDirection(u8 u8PortNB,u8 u8Direction)
{
	/*Local Variables*/
	u8 u8ErrorState;
	u8 u8PortId;
	/*Inputs validation*/
	if(u8PortNB>=NUM_OF_PORTS || ((u8Direction!=DIO_OUTPUT) && (u8Direction!=DIO_INPUT)))
	{
		u8ErrorState=ERROR_NOT_OK;
	}
	else
	{
		/*if pinNo is 18 so (pin No)18/(No of pins)8 => 2(2/8) so Port 2 (starting from port 0) and
		 * pinNo is 2 starting from pin0 in port2
		 * */

		switch(u8PortId)
		{
			case PORT_ONE:
			{
				SET_PORT_DIR(DDRA->ByteAccess,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			case PORT_TWO:
			{
				SET_PORT_DIR(DDRB->ByteAccess,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			case PORT_THREE:
			{
				SET_PORT_DIR(DDRC->ByteAccess,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			case PORT_FOUR:
			{
				SET_PORT_DIR(DDRD->ByteAccess,u8Direction);
				u8ErrorState=ERROR_OK;
			}
			break;

			default:
				u8ErrorState=ERROR_NOT_OK;
		}

	}
	/*Function return*/
	return u8ErrorState;
}
/**************************************************************************/
u8 DIO_init(void)
{
	u8 u8ErrorState;
	u8ErrorState=DIO_u8SetPortDirection(1,0xFF);
	return u8ErrorState;
}
