#include "config_ATmega32.h"

void delay_millisecond(u16 value)
{
	value = ((value*1000) - 2.4 - 1.8 - 12.4);
	u16 no_of_counts = (value/2.765);

    for(;no_of_counts > 0;no_of_counts--)
    {
        asm("NOP");
    }
}