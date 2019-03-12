/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
#include"BIT_CALC.h"
#include "DIO_interface.h"
//#include <util/delay.h>

#include"DelayMs.h"
#include "LMD_interface.h"
#include "KPD_interface.h"

#define JumpKey     		 5
#define WakeUpKey      		 1
#define SleepKey      		 9
#define RightKey      		 6
#define LeftKey      	 	 4
#define NumberOFPics     	 9
#define JumpNumberOFPics     3

u8 u8JumpAnimations[JumpNumberOFPics][LMD_SIZE_OF_LMD]={
		{227, 227, 247, 129, 247, 235, 221, 221},
		{199, 199, 239, 129, 247, 235, 221, 221},
		{241, 241, 251, 192, 247, 235, 235, 221}
};
u8 u8Animations[NumberOFPics][LMD_SIZE_OF_LMD]={
		{255, 247, 246, 21, 67, 21, 246, 247},
		{227, 235, 227, 247, 128, 247, 235, 221},
		{199, 215, 199, 239, 1, 239, 215, 187},
		{143, 175, 143, 223, 2, 223, 175, 119},
		{31, 95, 31, 191, 4, 191, 95, 238},
		{62, 190, 62, 127, 8, 127, 190, 221},
		{124, 125, 124, 254, 16, 254, 125, 187},
		{248, 250, 248, 253, 32, 253, 250, 119},
		{241, 245, 241, 251, 64, 251, 245, 238}
};
u8 test[LMD_SIZE_OF_LMD]={
		//0, 32, 151, 125, 151, 32, 0, 0//,
		//255,255,255,255,255,255,255,255
		//14, 10, 14, 4, 4, 52, 62, 11
		//10,0,0,0,0,0,0,0
		//2,2,2,2,2,2,2,2
		//4,4,4,4,4,4,4,4,4
		//8,8,8,8,8,8,8,8
		//16,16,16,16,16,16,16,16
		//32,32,32,32,32,32,32,32
		//64,64,64,64,64,64,64,64
		//128,128,128,128,128,128,128,128
		//255, 95, 168, 194, 168, 95, 255, 255
		//		239, 111, 168, 194, 168, 111, 239, 255
		//255, 247, 246, 21, 67, 21, 246, 247
		//247, 246, 21, 67, 21, 246, 247, 255
		//247, 246, 21, 67, 21, 246, 247, 255
		227, 235, 227, 247, 128, 247, 235, 221
};

int main(void){
	//u8 u8LoopIndex;
	u8 keypad_Status[KPD_NUM_OF_INPUTS * KPD_NUM_OF_OUTPUTS];
	DIO_voidInit();
	u8 u8LoopDelay;
	u8 u8Counter=1;
	u8 u8LoopNumberOFPics;
	while(1)
	{
		KPD_u8GetKeysState(keypad_Status);
		if(keypad_Status[JumpKey]==KPD_u8_PRESSED){
			for(u8LoopNumberOFPics=0;u8LoopNumberOFPics<JumpNumberOFPics;u8LoopNumberOFPics++){
				for(u8LoopDelay=0;u8LoopDelay<18;u8LoopDelay++){
					LMD_u8SetPattern(u8JumpAnimations[u8LoopNumberOFPics],LMD_u8_RED_COLOR);
				}
			}
		}
		else if(keypad_Status[RightKey]==KPD_u8_PRESSED){
			u8Counter++;
			if(u8Counter==NumberOFPics){
				u8Counter=1;
			}
			for(u8LoopNumberOFPics=0;u8LoopNumberOFPics<NumberOFPics;u8LoopNumberOFPics++){
				for(u8LoopDelay=0;u8LoopDelay<5;u8LoopDelay++){
					LMD_u8SetPattern(u8Animations[u8Counter],LMD_u8_RED_COLOR);
				}
			}
		}
		else if(keypad_Status[LeftKey]==KPD_u8_PRESSED){
			u8Counter--;
			if(u8Counter==0){
				u8Counter=NumberOFPics-1;
			}
			for(u8LoopNumberOFPics=0;u8LoopNumberOFPics<NumberOFPics;u8LoopNumberOFPics++){
				for(u8LoopDelay=0;u8LoopDelay<5;u8LoopDelay++){
					LMD_u8SetPattern(u8Animations[u8Counter],LMD_u8_RED_COLOR);
				}
			}
		}
		else if(keypad_Status[SleepKey]==KPD_u8_PRESSED){
			u8Counter=0;
			for(u8LoopNumberOFPics=0;u8LoopNumberOFPics<NumberOFPics;u8LoopNumberOFPics++){
				for(u8LoopDelay=0;u8LoopDelay<18;u8LoopDelay++){
					LMD_u8SetPattern(u8Animations[u8Counter],LMD_u8_RED_COLOR);
				}
			}
		}
		else if(keypad_Status[WakeUpKey]==KPD_u8_PRESSED){
			if(u8Counter==0){
				u8Counter=1;
			}
			for(u8LoopNumberOFPics=0;u8LoopNumberOFPics<NumberOFPics;u8LoopNumberOFPics++){
				for(u8LoopDelay=0;u8LoopDelay<18;u8LoopDelay++){
					LMD_u8SetPattern(u8Animations[u8Counter],LMD_u8_RED_COLOR);
				}
			}

		}
		else{
			for(u8LoopNumberOFPics=0;u8LoopNumberOFPics<JumpNumberOFPics;u8LoopNumberOFPics++){
				for(u8LoopDelay=0;u8LoopDelay<25;u8LoopDelay++){
					LMD_u8SetPattern(u8JumpAnimations[u8LoopNumberOFPics],LMD_u8_RED_COLOR);
				}
			}
		}

	}

	return 0 ;
}

