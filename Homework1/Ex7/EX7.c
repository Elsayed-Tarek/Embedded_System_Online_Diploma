/*
 * EX7.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsay
 */

#include<stdio.h>
void main()
{
	float a , b ;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &a );
	printf("\r\n Enter value of b: )");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &b );
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a: %f \r\n" ,a);
	printf("After swapping, value of b: %f \r\n" ,b);
}
