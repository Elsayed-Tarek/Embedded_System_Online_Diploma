/*
 * Ex2.c
 *
 *  Created on: Jul 24, 2023
 *      Author: elsayed
 */

#include<stdio.h>
void main(){
	int x,z;
	float sum , average ;
	float a [100];
	printf("\nEnter the numbers of data :");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&z);
	if (z<0 && z>100){
		printf("\n Invalid number");
	}
	else {
		for (x=0 ;x<z ;x++ ){
			printf("\n Enter number:");
			fflush(stdin); fflush(stdout);
			scanf ("%f" , &a[x]);
			sum+= a[x];

		}
	}
	average = sum/z ;
	printf("\n Average = %f" , average);
}
