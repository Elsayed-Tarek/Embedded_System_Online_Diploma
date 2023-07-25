/*
 * EX1.c
 *
 *  Created on: Jul 23, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main(){
	float a[2][2];
	float b[2][2];
	float c[2][2];
	int i,x;

	printf("Enter the elements of 1st matrix \r\n");
	for ( i=0 ;i<2 ;i++){
		for (x=0 ; x<2 ; x++){
			printf("Enter a%d%d \r\n" , i+1 ,x+1);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &a[i][x]);
		}
	}
	printf("Enter the elements of 2st matrix \r\n");
	for ( i=0 ;i<2 ;i++){
		for (x=0 ; x<2 ; x++){
			printf("Enter b%d%d \r\n" , i+1 ,x+1);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &b[i][x]);
		}
	}
	printf("\nsum of two matrixs \r\n");
	for ( i=0 ;i<2 ;i++){
		for (x=0 ; x<2 ; x++){
			c[i][x] = a[i][x] + b[i][x] ;
			printf ("%f\t " , c[i][x]);
		}
		printf("\r\n");
	}
}



