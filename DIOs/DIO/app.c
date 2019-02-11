/*
 * app.c
 *
 *  Created on: Jan 29, 2019
 *      Author: Amr Abdeen
 */
#include "STD_TYPES.h"
#include <util/delay.h>

int main(void)

{
	/*Set pin Direction*/

	while(1){
			LED_u8LEDON();
			_delay_ms(1000);
			LED_u8LEDOFF();
			_delay_ms(1000);
	}

	return 0;
}

