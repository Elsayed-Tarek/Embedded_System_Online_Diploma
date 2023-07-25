/*
 * Ex4.c
 *
 *  Created on: Jul 24, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main()
{
	int x ;
	int a [100];
	int i ,z ,y;
	printf("\n Enter no of elements :");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &x);
	for ( i=0 ; i<x ; i++){
		scanf("%d" ,&a[i]);
	}
	printf("\r\n");
	for (i=0 ; i<x ; i++){
		printf("%d\t" , a[i]);
	}
	printf("\n Enter the element to be inserted :");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&z);
	printf("\n Enter the location :");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&y);
	for (i=x ; i>=y ; i--){
		a[i]=a[i-1];
	}
	a[y-1]= z;

	for (i=0 ; i<x +1; i++){
		printf("%d\t" , a[i]);
	}
}

