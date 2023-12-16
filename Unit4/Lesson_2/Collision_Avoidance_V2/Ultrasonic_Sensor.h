/*
 * Ultrasonic_Sensor.h
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#ifndef ULTRASONIC_SENSOR_H_
#define ULTRASONIC_SENSOR_H_

#include"State.h"

enum{

	US_busy

}US_state_id;

//ProtoTypes

void US_init();
STATE_define(US_busy);

//Global pointer to function
void (*US_state)();



#endif /* ULTRASONIC_SENSOR_H_ */
