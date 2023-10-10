/*
 * Ex7.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main(){
	int i, x;
	int Factorial=1;
	printf("Enter an integer: \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	if (x>0){
		for (i=1 ; i < x+1 ; i++){
			Factorial *=i ;

		}printf("Factorial = %d \r\n",Factorial);
	}
	else  if (x<0)
	{
		printf(" Error !! Facorial of negative number doesn't exist \r\n");
	}
	else printf("Factorial = 1");
}
