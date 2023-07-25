/*
 * Ex3.c
 *
 *  Created on: Jul 24, 2023
 *      Author: elsayed
 */

#include<stdio.h>
void main(){
	int i,c;
	int x , y;
	float a [10][10];
	float b[10][10];
	printf("\nEnter rows and column of matrix :");
	fflush(stdin); fflush(stdout);
	scanf("%d%d" ,&x ,&y);

	for (i=0 ;i<x ;i++ ){
		for (c=0 ; c<y  ; c++){
			printf("\n Enter element%d%d :" , i+1 , c+1);
			fflush(stdin); fflush(stdout);
			scanf ("%f" , &a[i][c]);

		}
	}
	printf("\n Entered matrix : \r\n");
	for (i=0 ;i<x ;i++ ){
		for (c=0 ; c<y  ; c++){
			printf("%f\t" ,a[i][c] );
		}
		printf("\r\n");
	}
	for (i=0 ;i<y ;i++ ){
		for (c=0 ; c<x  ; c++){
			b[i][c]=a[c][i];
		}
	}
	printf(" Transpose of Matrix: \r\n");
	for (i=0 ;i<y ;i++ ){
		for (c=0 ; c<x  ; c++){
			printf("%f\t " , b[i][c]);
		}
		printf("\r\n");
	}
}

