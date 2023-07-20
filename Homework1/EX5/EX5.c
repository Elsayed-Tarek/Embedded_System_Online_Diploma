/*
 * EX5.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include <stdio.h>
void main()
{
	char a ;
	int x;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &a);
	x=a ;
	printf("ASCII value of %c = %d" ,a,x);
}
