/**********************************************************************************/
/* Author : Amr Abdeen                                                            */
/* Date   : 31 Jan. 2019                                                          */
/* Version: V01                                                                   */
/**********************************************************************************/
/* Description:                                                                   */
/*--------------                                                                  */
/* DIO Configuration File is responsible for ATMEGA32 Microcontroller pins and    */
/* ports configurations                                                           */
/*                                                                                */
/**********************************************************************************/

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#define F_CPU 8000000UL

/**********************************************************************************/
/* Configure ATmega's Pins direction as INPUT : PIN_DIR_INPUT                     */
/*                                      OUTPUT : PIN_DIR_OUTPUT                   */
/**********************************************************************************/

#define DIO_PIN0DIR  		PIN_DIR_OUTPUT
#define DIO_PIN1DIR  		PIN_DIR_OUTPUT
#define DIO_PIN2DIR  		PIN_DIR_OUTPUT
#define DIO_PIN3DIR  		PIN_DIR_OUTPUT
#define DIO_PIN4DIR  		PIN_DIR_OUTPUT
#define DIO_PIN5DIR  		PIN_DIR_OUTPUT
#define DIO_PIN6DIR  		PIN_DIR_OUTPUT
#define DIO_PIN7DIR  		PIN_DIR_OUTPUT
#define DIO_PIN8DIR  		PIN_DIR_OUTPUT
#define DIO_PIN9DIR  		PIN_DIR_OUTPUT
#define DIO_PIN10DIR 		PIN_DIR_OUTPUT
#define DIO_PIN11DIR 		PIN_DIR_OUTPUT
#define DIO_PIN12DIR 		PIN_DIR_OUTPUT
#define DIO_PIN13DIR 		PIN_DIR_OUTPUT
#define DIO_PIN14DIR 		PIN_DIR_OUTPUT
#define DIO_PIN15DIR 		PIN_DIR_OUTPUT
#define DIO_PIN16DIR 		PIN_DIR_OUTPUT
#define DIO_PIN17DIR 		PIN_DIR_OUTPUT
#define DIO_PIN18DIR 		PIN_DIR_OUTPUT
#define DIO_PIN19DIR 		PIN_DIR_OUTPUT
#define DIO_PIN20DIR 		PIN_DIR_OUTPUT
#define DIO_PIN21DIR 		PIN_DIR_OUTPUT
#define DIO_PIN22DIR 		PIN_DIR_OUTPUT
#define DIO_PIN23DIR 		PIN_DIR_OUTPUT
#define DIO_PIN24DIR 		PIN_DIR_OUTPUT
#define DIO_PIN25DIR 		PIN_DIR_OUTPUT
#define DIO_PIN26DIR 		PIN_DIR_OUTPUT
#define DIO_PIN27DIR 		PIN_DIR_OUTPUT
#define DIO_PIN28DIR 		PIN_DIR_OUTPUT
#define DIO_PIN29DIR 		PIN_DIR_OUTPUT
#define DIO_PIN30DIR 		PIN_DIR_OUTPUT
#define DIO_PIN31DIR 		PIN_DIR_OUTPUT

/****************************************************************/
/* Configure ATmega's Pins VALUE as HIGH : PIN_VALUE_HIGH       */
/*                                  LOW  : PIN_VALUE_LOW        */
/****************************************************************/

#define DIO_PIN0VALUE  		PIN_VALUE_HIGH
#define DIO_PIN1VALUE  		PIN_VALUE_HIGH
#define DIO_PIN2VALUE  		PIN_VALUE_HIGH
#define DIO_PIN3VALUE  		PIN_VALUE_HIGH
#define DIO_PIN4VALUE  		PIN_VALUE_HIGH
#define DIO_PIN5VALUE  		PIN_VALUE_HIGH
#define DIO_PIN6VALUE  		PIN_VALUE_HIGH
#define DIO_PIN7VALUE  		PIN_VALUE_HIGH
#define DIO_PIN8VALUE  		PIN_VALUE_HIGH
#define DIO_PIN9VALUE  		PIN_VALUE_HIGH
#define DIO_PIN10VALUE 		PIN_VALUE_HIGH
#define DIO_PIN11VALUE 		PIN_VALUE_HIGH
#define DIO_PIN12VALUE 		PIN_VALUE_HIGH
#define DIO_PIN13VALUE 		PIN_VALUE_HIGH
#define DIO_PIN14VALUE 		PIN_VALUE_HIGH
#define DIO_PIN15VALUE 		PIN_VALUE_HIGH
#define DIO_PIN16VALUE 		PIN_VALUE_HIGH
#define DIO_PIN17VALUE 		PIN_VALUE_HIGH
#define DIO_PIN18VALUE 		PIN_VALUE_HIGH
#define DIO_PIN19VALUE 		PIN_VALUE_HIGH
#define DIO_PIN20VALUE 		PIN_VALUE_HIGH
#define DIO_PIN21VALUE 		PIN_VALUE_HIGH
#define DIO_PIN22VALUE 		PIN_VALUE_HIGH
#define DIO_PIN23VALUE 		PIN_VALUE_HIGH
#define DIO_PIN24VALUE 		PIN_VALUE_HIGH
#define DIO_PIN25VALUE 		PIN_VALUE_HIGH
#define DIO_PIN26VALUE 		PIN_VALUE_HIGH
#define DIO_PIN27VALUE 		PIN_VALUE_HIGH
#define DIO_PIN28VALUE 		PIN_VALUE_HIGH
#define DIO_PIN29VALUE 		PIN_VALUE_HIGH
#define DIO_PIN30VALUE 		PIN_VALUE_HIGH
#define DIO_PIN31VALUE 		PIN_VALUE_HIGH



/******************************************************************/
/* Configure ATmega's Ports Direction as OUTPUT : PORT_DIR_OUTPUT */
/*                                       INPUT  : PORT_DIR_INPUT  */
/******************************************************************/

#define DIO_PORTA_DIR  	 PORT_DIR_OUTPUT
#define DIO_PORTB_DIR  	 PORT_DIR_OUTPUT
#define DIO_PORTC_DIR  	 PORT_DIR_OUTPUT
#define DIO_PORTD_DIR  	 PORT_DIR_OUTPUT


/****************************************************************/
/* Configure ATmega's Ports Value as     HIGH : PORT_DIR_OUTPUT */
/*                                       LOW  : PORT_DIR_INPUT  */
/****************************************************************/

#define DIO_PORTA_VALUE  PORT_VALUE_HIGH
#define DIO_PORTB_VALUE  PORT_VALUE_HIGH
#define DIO_PORTC_VALUE  PORT_VALUE_HIGH
#define DIO_PORTD_VALUE  PORT_VALUE_HIGH


#endif /* DIO_CONFIG_H_ */
