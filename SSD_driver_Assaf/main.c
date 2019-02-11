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
#include "SSD_interface.h"

#include <util/delay.h>

int main(void){


	DIO_voidInit();
	u8 S0=0;
	u8 S1=0;
	u8 S2=0;
	u8 S3=0;

	SSD_u8SetOff(1);
	SSD_u8SetOff(2);
	SSD_u8SetOff(3);
	SSD_u8SetOff(4);
	while(1)
	{

		for(S3=0;S3<10;S3++)
		{
			for(S2=0;S2<10;S2++)
			{
				for(S1=0;S1<10;S1++)
				{
					for(S0=0;S0<10;S0++)
					{
							SSD_u8SetOn(1);
							SSD_u8SetValue(1,S0);
							_delay_ms(2);
							SSD_u8SetOff(1);

							SSD_u8SetOn(2);
							SSD_u8SetValue(2,S1);
							_delay_ms(2);
							SSD_u8SetOff(2);

							SSD_u8SetOn(3);
							SSD_u8SetValue(3,S2);
							_delay_ms(2 );
							SSD_u8SetOff(3);

							SSD_u8SetOn(4);
							SSD_u8SetValue(4,S3);
							_delay_ms(2);
							SSD_u8SetOff(4);
					}

				}

			}
		}
	}
	return 0 ;
}

