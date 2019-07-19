/*
 * SERVO_SG90.h
 *
 *  Created on: Feb 9, 2019
 *      Author: Ahmadoh
 */

#ifndef SERVO_SG90_H_
#define SERVO_SG90_H_


//Red------>Power
//Brown---->Ground
//Orange--->OC1A




void SERVO_SG90_VidInit(void);

void SERVO_SG90_VidSetAngle(u8 LOC_u8Angle , u8 LOC_u8Channel);

#endif /* SERVO_SG90_H_ */
