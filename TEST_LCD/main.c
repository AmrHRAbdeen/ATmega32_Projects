
#define F_CPU 8000000UL			/* Define CPU Frequency e.g. here 8MHz */
#include <avr/io.h>			/* Include AVR std. library file */
#include <util/delay.h>		/* Include Delay header file */


int main()
{


	LCD_Init();			/* Initialization of LCD*/
	LCD_String_xy(0,0,"ahmed Elaka");

	while(1){

		_delay_ms(100);
	}
}
