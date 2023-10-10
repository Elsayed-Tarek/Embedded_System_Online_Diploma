/*
 * EX3.c
 *
 *  Created on: Jul 19, 2023
 *      Author: elsayed
 */
#include <stdio.h>
void main()
{
	int a , b , sum ;
	printf("Enter Two Numbers \r\n");
	fflush (stdin);
	fflush (stdout);
	scanf(" %d %d ", &a ,&b);
	sum = a + b ;
	printf(" sum: %d \r\n" , sum);
}
