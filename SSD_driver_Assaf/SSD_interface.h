/**************************************************/
/* Author      :  amr Abdeen                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/

#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

#define SSD_u8_ZERO    (u8)0 
#define SSD_u8_ONE     (u8)1 
#define SSD_u8_TWO     (u8)2 
#define SSD_u8_THREE   (u8)3 
#define SSD_u8_FOUR    (u8)4 
#define SSD_u8_FIVE    (u8)5 
#define SSD_u8_SIX     (u8)6 
#define SSD_u8_SEVEN   (u8)7 
#define SSD_u8_EIGHT   (u8)8 
#define SSD_u8_NINE    (u8)9 

u8 SSD_u8SetOn(u8 Copy_u8SsdNb);
u8 SSD_u8SetOff(u8 Copy_u8SsdNb);
u8 SSD_u8SetValue(u8 Copy_u8SsdNb ,u8 Copy_u8SsdValue);


#define SSD_u8_MAX_PINS   (u8)8
#define SSD_u8_CATHODE     (u8)0
#define SSD_u8_ANODE      (u8)1

#endif /* SSD_INTERFACE_H_ */
