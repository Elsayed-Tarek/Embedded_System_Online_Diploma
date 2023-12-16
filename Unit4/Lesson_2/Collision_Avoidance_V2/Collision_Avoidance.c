/*
 * Collision_Avoidance.c
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#include"Collision_Avoidance.h"

#include<stdio.h>
#include<stdlib.h>
unsigned int distance,speed,threshold = 50;





//ProtoTypes
STATE_define(CA_waiting);
STATE_define(CA_driving);

//Global Pointer To Function
void (*CA_state)();



void US_distance_get(int d)
{
	distance =  d ;
	(distance <= threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));

	printf("US-------distance=%d----->CA\n",distance);
}



STATE_define(CA_waiting)
{
	//State Action
	CA_state_id = CA_waiting;
	speed = 0;

	//Check Event

	DC_Motor(speed);

	printf("CA_waiting state : distance=%d speed=%d\n",distance,speed);


}
STATE_define(CA_driving)
{

	//State Action
	CA_state_id = CA_driving;
	speed = 30;

	//Check Event
	DC_Motor(speed);

	printf("driving state : distance=%d speed=%d\n",distance,speed);


}

