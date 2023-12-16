/*
 * Collision_Avoidance.h
 *
 *  Created on: Dec 15, 2023
 *      Author: elsay
 */

#ifndef COLLISION_AVOIDANCE_H_
#define COLLISION_AVOIDANCE_H_

#include"State.h"

enum{
	CA_waiting,
	CA_driving

}CA_state_id;

//ProtoTypes
void CA_init();
STATE_define(CA_waiting);
STATE_define(CA_driving);

//Global pointer to function
extern void (*CA_state)();

#endif /* COLLISION_AVOIDANCE_H_ */
