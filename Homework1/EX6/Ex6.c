/*
 * Ex6.c
 *
 *  Created on: Jul 19, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main()
{
	float a , b ;
	float swap ;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &a );
	printf("\r\n Enter value of b: )");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &b );
	swap =a ;
	a=b ;
	b=swap;
	printf("After swapping, value of a: %f" ,a);
	printf("After swapping, value of b: %f" ,b);


}
