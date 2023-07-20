/*
 * Ex4.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main()
{
	float x ;
	printf("Enter a number: \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&x);
	if (x >0){
		printf("%f is a positive number \r\n" ,x);
	}
	else if (x<0){
		printf("%f is a negative number \r\n" ,x);
	}
	else
		printf("You entered zero");
}
