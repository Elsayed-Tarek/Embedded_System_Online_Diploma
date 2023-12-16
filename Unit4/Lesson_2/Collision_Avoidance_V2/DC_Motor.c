/*
 * DC_Motor.c
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#include"DC_Motor.h"

void (*DC_state)();
unsigned int speed ;


void DC_init(){

	//init DC_Motor
	printf("DC init\n");
}

void DC_Motor(int s)
{
	speed = s ;
	DC_state = STATE(DC_busy);

	printf("CA-------->DC DC_Motor() \n");

}

STATE_define(DC_idle){

	//state action
	DC_state_id = DC_idle;

	//call DC Driver
	DC_state = STATE(DC_idle);

	printf("DC_idle state speed=%d\n\n",speed);

}
STATE_define(DC_busy){

	//state action
	DC_state_id = DC_busy;

	//call DC Driver
	DC_state = STATE(DC_idle);

	printf("DC_busy state speed=%d\n\n",speed);


}
