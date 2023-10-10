/*
 * Ex1.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main(){
	int x ;
	printf("Enter an integer you want to check");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" ,&x);
	if(x%2 == 0){
		printf("%d is even\r\n" ,x);
	}
	else {
		printf("%d is odd \r\n" ,x);
	}
}
