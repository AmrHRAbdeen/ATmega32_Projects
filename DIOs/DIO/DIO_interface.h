/**********************************************************************************/
/* Author : Amr Abdeen                                                            */
/* Date   : 31 Jan. 2019                                                          */
/* Version: V01                                                                   */
/**********************************************************************************/
/* Description:                                                                   */
/*-------------                                                                   */
/*                                                                                */
/**********************************************************************************/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
/*According to MISRA Rule you have to cast the number to your desired data type to avoid the problem of naming convension*/
#define DIO_INPUT  (u8)0
#define DIO_OUTPUT (u8)1

#define PORT_OUTPUT 0xFF
#define PORT_INPUT  0x00



#define DIO_PIN0    0
#define DIO_PIN1    1
#define DIO_PIN2    2
#define DIO_PIN3    3
#define DIO_PIN4    4
#define DIO_PIN5    5
#define DIO_PIN6    6
#define DIO_PIN7    7
#define DIO_PIN8    8
#define DIO_PIN9    9
#define DIO_PIN10   10
#define DIO_PIN11   11
#define DIO_PIN12   12
#define DIO_PIN13   13
#define DIO_PIN14   14
#define DIO_PIN15   15
#define DIO_PIN16   16
#define DIO_PIN17   17
#define DIO_PIN18   18
#define DIO_PIN19   19
#define DIO_PIN20   20
#define DIO_PIN21   21
#define DIO_PIN22   22
#define DIO_PIN23   23
#define DIO_PIN24   24
#define DIO_PIN25   25
#define DIO_PIN26   26
#define DIO_PIN27   27
#define DIO_PIN28   28
#define DIO_PIN29   29
#define DIO_PIN30   30
#define DIO_PIN31   31

/* Description : Setting bit direction
 * Inputs: u8PinNB: Pin Number
 * 		   u8Direction: INPUT / OUTPUT
 * OUtputs: Error State (1 SUCCESS , 0 FAIL)
*/

u8 DIO_u8SetPinDirection(u8 u8PinNB,u8 u8Direction);

u8 DIO_u8SetPinValue(u8 u8PinNB,u8 u8Value);

u8 DIO_u8GetPinValue(u8 u8PinNB,u8* value);

u8 DIO_u8SetPortDirection(u8 u8PortNB,u8 u8Direction);

#endif /*DIO_INTERFACE_H_*/
