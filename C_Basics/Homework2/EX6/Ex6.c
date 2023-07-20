/*
 * Ex6.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */

#include<stdio.h>
void main(){
	int x;
	int i;
	int sum;
	printf("Enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	for ( i=0 ; i<=x ;i++){
		sum +=i;
	}
	printf("Sum = %d\r\n",sum);
}


