/*
 * State.h
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#ifndef STATE_H_
#define STATE_H_

#define STATE_define(_stateFunc_) void ST##_stateFunc_()
#define STATE(_stateFunc_) ST##_stateFunc_

#include<stdio.h>
#include<stdlib.h>

//States Connections

void US_distance_get(int d);
void DC_Motor(int s);


#endif /* STATE_H_ */
