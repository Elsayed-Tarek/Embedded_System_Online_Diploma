/*
 * Ex.c
 *
 *  Created on: Jul 30, 2023
 *      Author: elsayed
 */
#include<stdio.h>
int factorial (int x );
int main(){
	int x;
	printf("\nEnter an positive integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("\nFactorial of %d is : %d" , x, factorial(x));
	return 0 ;
}
int factorial (int x ) {
	if (x!=1)
		return x * factorial (x-1);
}

