/*
 * LED.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: jo
 */

#ifndef LED_H_
#define LED_H_


/**Led Status States */
#define ON 1
#define OFF 0





void LED_VidSetLedState(u8 LOC_u8Port , u8 LOC_u8Pin , u8 LOC_u8State);
/***************************************************************************************/
/* Description! Setting LED State :---- ON or OFF                                      */
/* Input      ! PortNumber , PinNumber ,  LedState                                     */
/* Output     ! Nothing                                                                */
/***************************************************************************************/



#endif /* LED_H_ */
