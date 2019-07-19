/*
 * DCMOTOR.c
 *
 *  Created on: Feb 10, 2019
 *      Author: Ahmadoh
 */
#include"TYPES.h"
#include"TIMER2.h"

void DCMOTOR_VidInit(void)
{

	TIMER2_VidFastPWMSetT_totalOverFlow(8);
}


void DCMOTOR_VidSetSpeed(u8 LOC_u8Speed)
{

	if(LOC_u8Speed < 100)
	{
		TIMER2_VidSetT_on(((LOC_u8Speed * 256)/100));
	}else
	{
		TIMER2_VidSetT_on(255);
	}

}
