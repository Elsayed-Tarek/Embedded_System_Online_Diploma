/*
 * Ex8.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main(){
	char s ;
	float x , y ;
	float a,b,c,d;
	printf("Enter operator either + or - or * or / : \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&s);
	printf(" Enter two operands:\r\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f" ,&x ,&y);
	switch (s)
	{
	case '+' : {
		a=x+y;
		printf("%f + %f = %f" , x,y,a);
	}
	break;
	case '-' : {
		b=x-y;
		printf("%f - %f = %f" , x,y,b);
	}
	break;
	case '*' : {
		c=x*y;
		printf("%f * %f = %f" , x,y,c);
	}
	break;
	case '/' :
	{
		d=x/y;
		printf("%f / %f = %f" , x,y,d);
	}
	break;
	default :
	{
		printf("Wrong choice ");
	}
	}
}
