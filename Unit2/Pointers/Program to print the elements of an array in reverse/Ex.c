/*
 * Ex.c
 *
 *  Created on: Sep 5, 2023
 *      Author: Elsayed Tarek
 */
#include<stdio.h>
int main(){
	int x;
	int array[15];

	int* ptr = array;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&x);
	printf("\nEnter the elements : ");
	for (int i=0; i<x ; i++){
		printf("\nelement-%d : " ,i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d" ,ptr);
		ptr++;
	}
	ptr =&array[x-1];
	printf("\nThe elements of array in reverse order are : ");
	for(int i=x; i>0 ;i--){
		printf("element - %d : %d\n" ,i,*ptr);
		ptr--;
	}

	return 0;
}
