/*
 * Ultrasonic_Sensor.c
 *
 *  Created on: Dec 15, 2023
 *      Author: Elsayed Tarek
 */

#include"Ultrasonic_Sensor.h"

extern void (*US_state)();

int generate_distance(int l , int r , int count);

unsigned int distance ;

int generate_distance(int l , int r , int count)
{
	int z;
	for( z = 0 ; z < count ; z++)
	{
		int rand_value = (rand() % (r - l + 1) + l ) ;
		return rand_value ;
	}

}

void US_init()
{
	//init US_Sensor
	printf("US_init\n");
}

STATE_define(US_busy)
{
	//state action
	US_state_id = US_busy;
	//read from US
	distance = generate_distance(45,55,1);



	printf("US_busy state distance=%d\n" ,distance);
	US_distance_get(distance);
	US_state = STATE(US_busy);
}
