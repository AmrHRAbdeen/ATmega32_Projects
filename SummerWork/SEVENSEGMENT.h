/*
 * SEVENSEGMENT.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: jo
 */

#ifndef SEVENSEGMENT_H_
#define SEVENSEGMENT_H_

/******************************Common Anode SevenSegment********************************/


void SEVENSEGMENT_VidInit(u8 LOC_PowerPort , u8 LOC_PowerPin );
/***************************************************************************************/
/* Description! Initializing the Common Anode                                          */
/* Input      ! CommonAnodePortNumber , CommonAnodePortDirection                       */
/* Output     ! Nothing                                                                */
/***************************************************************************************/




void SEVENSEGMENT_VidPrintNumber( u8 LOC_u8Port , u8 LOC_u8Number );
/***************************************************************************************/
/* Description! Printing a number on a specific port                                   */
/* Input      ! PortNumber , number from 0 to 9                                        */
/* Output     ! Nothing                                                                */
/***************************************************************************************/



void SEVENSEGMENT_VidClearNumber(u8 LOC_u8Port );
/***************************************************************************************/
/* Description! Clearing a number on a specific port                                   */
/* Input      ! PortNumber                                                             */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void SEVENSEGMENT_VidEnable(u8 LOC_PowerPort , u8 LOC_PowerPin );
void SEVENSEGMENT_VidDisable(u8 LOC_PowerPort , u8 LOC_PowerPin );



#endif /* SEVENSEGMENT_H_ */
