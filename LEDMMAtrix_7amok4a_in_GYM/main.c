/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
//#include "delay_ms_interface.h"
#include "DIO_interface.h"


#include <util/delay.h>

u8 rows[8]={0b00000001,0b00000010,0b00000100,0b00001000,0b00010000,0b00100000,0b01000000,0b10000000};
u8 images[3][8]={{255, 27, 106, 112, 106, 27, 255, 255},{255, 23, 106, 112, 106, 23, 255, 255},{255, 29, 106, 112, 106, 29, 255, 255}};


int main(void){

	DIO_voidInit();
	while(1)
	{
		for(u8 k=0;k<3;k++)
		{
			for(u8 j=0;j<18;j++)
						{
							for(u8 i=0;i<8;i++)
							{
								DIO_u8SetPortnValue(3,rows[i]);
								DIO_u8SetPortnValue(0,images[k][i]);
								_delay_ms(2);
							}
						}
		}

	}
	return 0 ;
}

