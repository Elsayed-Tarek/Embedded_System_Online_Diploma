/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 *
 */
#include<stdio.h>
void reverse (int a[] , int size);
int main(){
	int a[100];
	int size ;
	printf("Enter the size of array : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&size);
	printf("\nEnter the elements : ");
	for(int i=0; i<size ; i++){
		scanf("%d" ,&a[i]);
	}
	reverse(a,size);
}
void reverse (int a[] , int size){
	for (int i=size-1 ; i>=0 ; i--){
		printf("%d\t" ,a[i]);
	}

}
