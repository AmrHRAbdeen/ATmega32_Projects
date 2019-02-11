/**********************************************************************************/
/* Author : Amr Abdeen                                                            */
/* Date   : 31 Jan. 2019                                                          */
/* Version: V01                                                                   */
/**********************************************************************************/
/* Description:                                                                   */
/*--------------                                                                  */
/* LED interface File is used to list LED driver APIs                             */
/*                                                                                */
/**********************************************************************************/

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

/*General purpose Input / Output bits*/
#define PIN_OUTPUT (u8)1

#define PIN_INPUT  (u8)0

#define PORT_DIR_OUTPUT    (u8)0xFF

#define PORT_DIR_INPUT     (u8)0x00

#define PORT_VALUE_HIGH    (u8)0xFF

#define PORT_VALUE_LOW     (u8)0x00

#define PIN_VALUE_INPUT    (u8)0

#define PIN_VALUE_OUPUT    (u8)1

#define PIN_DIR_INPUT      (u8)0

#define PIN_DIR_OUTPUT     (u8)1

u8 LED_u8TurnLedOn(u8 Local_u8PinNB);

u8 LED_u8TurnLedOff(u8 Local_u8PinNB);

#endif /* LED_INTERFACE_H_ */
