/************************************************************************************/
/*			--Two 7 segments using One Port--                                       */
/*                                                                                  */
/*Circuit:                                                                          */
/*	- Both Common Cathode Seven Segments are connected to PortB                     */
/*	  7 Data pins(neglecting the dot terminal)are connected from pin 0 to pin 6     */
/*	- Connect both 7 segments common cathode terminals to pin 7 in Port B           */
/*	- Using Pin7 in portB to toggle between the two common cathode 7 segments using */
/*	  PNP and NPN transistors.                                                      */
/* 	- PS: Disconnect the two 7 segments while burning the code as PortB is connected*/
/* 		  to programmer pins.I used this port because I have technical problems with*/
/* 		  the others ports. You are free to change it in sevenseg_config.h file     */
/*                                                                                  */
/*	Author    : Amr Abdeen                                                          */
/*  GitHub URL:                                                                     */
/*************************************************************************************/

/*Include Header Files*/
#include "ATmega32_Regsiters.h"
#include "config_ATmega32.h"
#include "sevenseg_config.h"

int main(void)
{

	/*Ports Configurations*/
	SEVEN_SEG_PORT_DIR =PORT_OUTPUT;

	/*Super Loop Area*/
	while(TRUE)
	{
			/* Write 9 on seven segment port (PortB)*/
			SEVEN_SEG_PORT=NINE_SEVEN_SEG;
			/*Wait*/
			delay_millisecond(MUX_DELAY);
			/* Write 3 on seven segment port (PortB)*/
			SEVEN_SEG_PORT=THREE_SEVEN_SEG;
			/*Wait*/
			delay_millisecond(MUX_DELAY);
	}

	return FALSE; // Indicating NO ERROR Found
}


