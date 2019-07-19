/*
 * KEYBAD.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: jo
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#define PRESSED 1
#define NOT_PRESSED 0


void KEYPAD_VidInit(void);
/***************************************************************************************/
/* Description! Apply initialization sequence for KEYBAD Module like                   */
/*              pins and port directions                                               */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/





u8 KEYPAD_u8GetButtonStatus(u8 LOC_u8Button);
/***************************************************************************************/
/* Description! Interface to return PRESSED OR NOT_PRESSED  to Button                  */
/* Input      ! Button Number                                                          */
/* Output     ! PRESSED or NOT_PRESSED                                                 */
/***************************************************************************************/

#endif /* KEYPAD_H_ */
