/*
 * Collision_Avoidance.c
 *
 *  Created on: Dec 14, 2023
 *      Author: Elsayed Tarek
 */

#include<stdio.h>
#include<stdlib.h>
unsigned int distance,speed,threshold = 50;

int generate_random(int i,int l, int count);

enum {
	waiting,
	driving
}state_id;


#define STATE_define(_stateFunc_) void CA_##_stateFunc_()
#define STATE(_stateFunc_) CA_##_stateFunc_


//ProtoTypes
STATE_define(waiting);
STATE_define(driving);

//Global Pointer To Function
void (*state)();


STATE_define(waiting)
{
	//State Action
	state_id = waiting;
	speed = 0;
	distance = generate_random(45,55,1);

	//Check Event
	(distance <= threshold) ? (state = STATE(waiting)) : (state = STATE(driving));
	printf("waiting state : distance=%d speed=%d\n",distance,speed);


}
STATE_define(driving)
{

	//State Action
	state_id = driving;
	speed = 30;
	distance = generate_random(45,55,1);

	//Check Event
	(distance<=threshold) ? (state = STATE(waiting)) : (state = STATE(driving));
	printf("driving state : distance=%d speed=%d\n",distance,speed);






}
void setup()
{
	//motor_init()
	//init SoC Modules
	state = STATE(waiting);
}
void main()
{
	volatile int d ;
	setup();
	while (1)
	{
		state();
		//delay
		for(int d = 0 ; d < 10000 ; d++);
	}


}
int generate_random(int i,int l, int count)
{
	//This will generate random value in range of (i,l)

	int x ;
	for(x = 0 ; x < count ; x++)
	{
		int rand_value = (rand() % (l - i + 1)) + i ;
		return rand_value;
	}


}
