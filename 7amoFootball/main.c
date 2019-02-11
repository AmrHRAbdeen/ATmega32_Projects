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
u8 images[4][8]={{255, 227, 235, 227, 247, 227, 151, 139},{255, 227, 235, 227, 247, 131, 151, 235},{255, 227, 235, 227, 247, 35, 55, 235},{255, 227, 235, 227, 247, 227, 55, 43}};


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

