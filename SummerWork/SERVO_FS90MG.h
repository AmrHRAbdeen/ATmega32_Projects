/*
 * SERVO_FS90MG.h
 *
 *  Created on: Jun 26, 2019
 *      Author: le
 */

#ifndef SERVO_FS90MG_H_
#define SERVO_FS90MG_H_

//Red------>Power
//Brown---->Ground
//Orange--->OC1A




void SERVO_FS90MG_VidInit(void);

void SERVO_FS90MG_VidSetAngle(u8 LOC_u8Angle , u8 LOC_u8Channel);

#endif /* SERVO_FS90MG_H_ */
