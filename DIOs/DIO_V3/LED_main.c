/*
 * LED_main.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */

#include "LED_interface.h"
#include <util/delay.h>
int main(void){
	void GPIO_init(void);

	while(1){







		u8_LedOn(10);
		_delay_ms(1000);
		u8_LedOff(10);
		_delay_ms(100);
	}

}
