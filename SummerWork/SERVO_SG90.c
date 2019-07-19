/*
 * SERVO_SG90.c
 *
 *  Created on: Feb 9, 2019
 *      Author: Ahmadoh
 */
#include"TYPES.h"
#include"TIMER1.h"
#include"DIO.h"




void SERVO_SG90_VidInit(void)
{

	TIMER1_VidFastPWMSetT_totalCTC(3750 , 64);

}



void SERVO_SG90_VidSetAngle(u8 LOC_u8Angle , u8 LOC_u8Channel)
{

	if(LOC_u8Channel==TIMER1_CHANNELA){
		if(LOC_u8Angle==0){
			TIMER1_VidSetT_on(TIMER1_CHANNELA,375);
		}
		else if(LOC_u8Angle==90){
			TIMER1_VidSetT_on(TIMER1_CHANNELA,290);
		}
		else if(LOC_u8Angle==180){
			TIMER1_VidSetT_on(TIMER1_CHANNELA,188);
		}
	}
	else if(LOC_u8Channel==TIMER1_CHANNELB){
		if(LOC_u8Angle==0){
			TIMER1_VidSetT_on(TIMER1_CHANNELB,375);
		}
		else if(LOC_u8Angle==90){
			TIMER1_VidSetT_on(TIMER1_CHANNELB,310);
		}
		else if(LOC_u8Angle==180){
			TIMER1_VidSetT_on(TIMER1_CHANNELB,188);
		}
	}

}
