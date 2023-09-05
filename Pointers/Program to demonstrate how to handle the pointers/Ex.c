/*
 * Ex.c
 *
 *  Created on: Sep 5, 2023
 *      Author:Elsayed Tarek
 */
#include <stdio.h>
#include<string.h>
int main() {
	int m = 29 ;
	int *ab;
	ab =&m;
	printf("Address of m : %p" ,&m);
	printf("\nValue of m : %d" ,m);
	printf("\nNow ab is assigned with the address of m.");
	printf("\nAddress of pointer ab : %p" ,ab);
	printf("\nContent of pinter ab : %d" ,*ab);
	*ab=34;
	printf("\nThe value of m assigned to 34 now.");
	printf("\nAddress of pointer ab : %p" ,ab);
	printf("\nContent of pinter ab : %d" ,*ab);
	*ab=7;
	printf("\nThe pointer variable ab is assigned with the value 7 now.");
	printf("\nAddress of m : %p" ,&m);
	printf("\nValue of m : %d" ,m);
}
