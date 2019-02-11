/*
 * DIO_prog.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Amr Abdeen
 */
#include "STD_TYPES.h"
#include "BIT_CALC.h"

#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"

// Define Macros :

#define DIO_MAXPINNB  32
#define DIO_MAXPORTNB 4


//Pin Functions :
u8 DIO_u8init(void ){

//DDRA
	DDRA->BitAccess.Bit0 =DIO_PIN0DIR;
	DDRA->BitAccess.Bit1 =DIO_PIN1DIR;
	DDRA->BitAccess.Bit2 =DIO_PIN2DIR;
	DDRA->BitAccess.Bit3 =DIO_PIN3DIR;
	DDRA->BitAccess.Bit4 =DIO_PIN4DIR;
	DDRA->BitAccess.Bit5 =DIO_PIN5DIR;
	DDRA->BitAccess.Bit6 =DIO_PIN6DIR;
	DDRA->BitAccess.Bit7 =DIO_PIN7DIR;
//DDRB
	DDRB->BitAccess.Bit0 =DIO_PIN8DIR;
	DDRB->BitAccess.Bit1 =DIO_PIN9DIR;
	DDRB->BitAccess.Bit2 =DIO_PIN10DIR;
	DDRB->BitAccess.Bit3 =DIO_PIN11DIR;
	DDRB->BitAccess.Bit4 =DIO_PIN12DIR;
	DDRB->BitAccess.Bit5 =DIO_PIN13DIR;
	DDRB->BitAccess.Bit6 =DIO_PIN14DIR;
	DDRB->BitAccess.Bit7 =DIO_PIN15DIR;
//DDRC
	DDRC->BitAccess.Bit0 =DIO_PIN16DIR;
	DDRC->BitAccess.Bit1 =DIO_PIN17DIR;
	DDRC->BitAccess.Bit2 =DIO_PIN18DIR;
	DDRC->BitAccess.Bit3 =DIO_PIN19DIR;
	DDRC->BitAccess.Bit4 =DIO_PIN20DIR;
	DDRC->BitAccess.Bit5 =DIO_PIN21DIR;
	DDRC->BitAccess.Bit6 =DIO_PIN22DIR;
	DDRC->BitAccess.Bit7 =DIO_PIN23DIR;
//DDRD
	DDRD->BitAccess.Bit0 =DIO_PIN24DIR;
	DDRD->BitAccess.Bit1 =DIO_PIN25DIR;
	DDRD->BitAccess.Bit2 =DIO_PIN26DIR;
	DDRD->BitAccess.Bit3 =DIO_PIN27DIR;
	DDRD->BitAccess.Bit4 =DIO_PIN28DIR;
	DDRD->BitAccess.Bit5 =DIO_PIN29DIR;
	DDRD->BitAccess.Bit6 =DIO_PIN30DIR;
	DDRC->BitAccess.Bit7 =DIO_PIN31DIR;

		return ERROR_OK;

}

u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB, u8 Copy_u8Direction){
	    u8 Local_u8Error=ERROR_OK;
		u8 Local_u8PinId;
		u8 Local_u8PortId;
		if((Copy_u8PinNB >= DIO_MAXPINNB) || (Copy_u8Direction !=DIO_PIN_OUTPUT && Copy_u8Direction != DIO_PIN_INPUT)){
			Local_u8Error = ERROR_NOK;
		}else{

			Local_u8PinId= Copy_u8PinNB %  DIO_NUMBER_PINS_IN_PORT;
			Local_u8PortId = Copy_u8PinNB / DIO_NUMBER_PINS_IN_PORT;
			switch (Local_u8PortId){
				case DIO_DDR_A :
					BIT_CALC_ASSIGN_BIT(DDRA->ByteAccess,Local_u8PinId,Copy_u8Direction);
				break;
				case DIO_DDR_B:
					BIT_CALC_ASSIGN_BIT(DDRB->ByteAccess,Local_u8PinId,Copy_u8Direction);
				break;
				case DIO_DDR_C:
					BIT_CALC_ASSIGN_BIT(DDRC->ByteAccess,Local_u8PinId,Copy_u8Direction);
				break;
				case DIO_DDR_D:
					BIT_CALC_ASSIGN_BIT(DDRD->ByteAccess,Local_u8PinId,Copy_u8Direction);
				break;
			}

		}
		return Local_u8Error;
}

u8 DIO_u8SetPinValue(u8 Copy_u8PinNB, u8 Copy_u8PinValue){
    u8 Local_u8Error=ERROR_OK;
	u8 Local_u8PinId;
	u8 Local_u8PortId;
	if((Copy_u8PinNB >= DIO_MAXPINNB) || (Copy_u8PinValue !=DIO_PIN_OUTPUT && Copy_u8PinValue != DIO_PIN_INPUT)){
		Local_u8Error = ERROR_NOK;
	}else{

		Local_u8PinId= Copy_u8PinNB %  DIO_NUMBER_PINS_IN_PORT;
		Local_u8PortId = Copy_u8PinNB / DIO_NUMBER_PINS_IN_PORT;
		switch (Local_u8PortId){
			case DIO_PORT_A :
				BIT_CALC_ASSIGN_BIT(PORTA->ByteAccess,Local_u8PinId,Copy_u8PinValue);
			break;
			case DIO_PORT_B:
				BIT_CALC_ASSIGN_BIT(PORTB->ByteAccess,Local_u8PinId,Copy_u8PinValue);
			break;
			case DIO_PORT_C:
				BIT_CALC_ASSIGN_BIT(PORTC->ByteAccess,Local_u8PinId,Copy_u8PinValue);
			break;
			case DIO_PORT_D:
				BIT_CALC_ASSIGN_BIT(PORTD->ByteAccess,Local_u8PinId,Copy_u8PinValue);
			break;
		}

	}
	return Local_u8Error;

}

u8 DIO_u8GetPinValue(u8 Copy_u8PinNB, u8 * Copy_pu8PinValue)
{

	u8 Local_u8Error=ERROR_OK;
		u8 Local_u8PinId;
		u8 Local_u8PortId;
		if((Copy_u8PinNB >= DIO_MAXPINNB) || (Copy_pu8PinValue ==NULL)){
			Local_u8Error = ERROR_NOK;
		}else{

			Local_u8PinId= Copy_u8PinNB %  DIO_NUMBER_PINS_IN_PORT;
			Local_u8PortId = Copy_u8PinNB / DIO_NUMBER_PINS_IN_PORT;
			switch (Local_u8PortId){
				case DIO_PIN_A :
					*Copy_pu8PinValue = BIT_CALC_GET_BIT(PINA->ByteAccess,Local_u8PinId);
				break;
				case DIO_PIN_B:
					*Copy_pu8PinValue = BIT_CALC_GET_BIT(PINB->ByteAccess,Local_u8PinId);
				break;
				case DIO_PIN_C:
					*Copy_pu8PinValue = BIT_CALC_GET_BIT(PINC->ByteAccess,Local_u8PinId);
				break;
				case DIO_PIN_D:
					*Copy_pu8PinValue = BIT_CALC_GET_BIT(PIND->ByteAccess,Local_u8PinId);
				break;
			}

		}
		return Local_u8Error;
}

// Port Functions :
u8 DIO_u8SetPortDirection(u8 Copy_u8PortNB, u8 Copy_u8Direction){
    u8 Local_u8Error=ERROR_OK;
	if((Copy_u8PortNB >= DIO_MAXPORTNB) || (Copy_u8Direction <=DIO_PORT_OUTPUT && Copy_u8Direction >= DIO_PORT_INPUT)){
		Local_u8Error = ERROR_NOK;
	}else{
		switch (Copy_u8PortNB){
			case DIO_PORT_A :
				BIT_CALC_SET_PORT_DIRECTION(PORTA->ByteAccess,Copy_u8Direction);
			break;
			case DIO_PORT_B:
				BIT_CALC_SET_PORT_DIRECTION(PORTB->ByteAccess,Copy_u8Direction);
			break;
			case DIO_PORT_C:
				BIT_CALC_SET_PORT_DIRECTION(PORTC->ByteAccess,Copy_u8Direction);
			break;
			case DIO_PORT_D:
				BIT_CALC_SET_PORT_DIRECTION(PORTD->ByteAccess,Copy_u8Direction);
			break;
		}

	}
	return Local_u8Error;
}
u8 DIO_u8SetPortnValue(u8 Copy_u8PortNB, u8 Copy_u8PortValue){

    u8 Local_u8Error=ERROR_OK;

    if((Copy_u8PortNB >= DIO_MAXPORTNB) || (Copy_u8PortValue > DIO_PORT_VALUE_MAX || Copy_u8PortValue < DIO_PORT_VALUE_MIN)){
		Local_u8Error = ERROR_NOK;
	}else{
		switch (Copy_u8PortNB){
			case DIO_PORT_A :
				BIT_CALC_SET_PORT_VALUE(PORTA->ByteAccess,Copy_u8PortValue);
			break;
			case DIO_PORT_B:
				BIT_CALC_SET_PORT_VALUE(PORTB->ByteAccess,Copy_u8PortValue);
			break;
			case DIO_PORT_C:
				BIT_CALC_SET_PORT_VALUE(PORTC->ByteAccess,Copy_u8PortValue);
			break;
			case DIO_PORT_D:
				BIT_CALC_SET_PORT_VALUE(PORTD->ByteAccess,Copy_u8PortValue);
			break;
		}

	}
	return Local_u8Error;
}

u8 DIO_u8GetPortnValue	(u8 Copy_u8PortNB, u8 * Copy_pu8PortValue){
	u8 Local_u8Error=ERROR_OK;
	if((Copy_u8PortNB >= DIO_MAXPORTNB) ){
		Local_u8Error = ERROR_NOK;
	}else{
		switch (Copy_u8PortNB){
			case DIO_PORT_A :
				*Copy_pu8PortValue = PINA->ByteAccess;
			break;
			case DIO_PORT_B:
				*Copy_pu8PortValue = PINB->ByteAccess;
			break;
			case DIO_PORT_C:
				*Copy_pu8PortValue = PINC->ByteAccess;
			break;
			case DIO_PORT_D:
				*Copy_pu8PortValue = PIND->ByteAccess;
			break;
		}

	}
	return Local_u8Error;
}


