/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#include "Collision_Avoidance.h"
#include "DC_motor.h"
#include "Ultrasonic_Sensor.h"

void setup(){

	//initialize Block
	DC_init();
	US_init();
	//set state pointer for each block
	CA_state = STATE(CA_waiting);
	DC_state = STATE(DC_idle);
	US_state = STATE(US_busy);
}

void main(){
	volatile int i;
	setup();
	while(1){
		//calling each state
		US_state();
		CA_state();
		DC_state();

		//delay
		for(i = 0; i <= 1000;i++);
	}
}
