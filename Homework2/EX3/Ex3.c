/*
 * Ex3.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main(){
	float x,y,z;
	printf("Enter three numbers \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f" ,&x ,&y ,&z);
	if ( x>y){
		if (x>z)
			printf("Largest number is:%f \r\n",x);

		else
			printf("Largest number is:%f \r\n" ,z);

	}
	else
	{
		if (y>z)

			printf("Largest number is: %f \r\n" ,y);
		else
			printf("Largest number is: %f \r\n,z");


	}
}
