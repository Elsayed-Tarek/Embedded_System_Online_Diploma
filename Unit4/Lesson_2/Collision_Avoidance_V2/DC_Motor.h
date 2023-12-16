/*
 * DC_Motor.h
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include"State.h"

enum {
	DC_idle,
	DC_busy

}DC_state_id;

//ProtoTypes
void DC_init();
STATE_define(DC_idle);
STATE_define(DC_busy);

//Global pointer to function
extern void (*DC_state)();


#endif /* DC_MOTOR_H_ */
