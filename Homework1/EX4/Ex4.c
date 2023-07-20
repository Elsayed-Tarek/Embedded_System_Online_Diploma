/*
 * Ex4.c
 *
 *  Created on: Jul 19, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main()
{
	float a , b ;
	float product ;
	printf("Enter Two Num \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f" , &a , &b);
	product = a*b ;
	printf("Product is %f \r\n" , product);
}
