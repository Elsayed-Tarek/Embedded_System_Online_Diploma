/*
 * Ex.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Elsayed Tarek
 */

#include<stdio.h>
#define Pi 3.1415
#define area(r)(Pi*(r)*(r))
int main(void)
{
	float radius;
	float area;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	area=area(radius);
	printf("Area=%.2f",area);
}
