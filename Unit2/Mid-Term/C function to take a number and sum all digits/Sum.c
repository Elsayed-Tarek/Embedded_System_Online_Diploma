/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 */
#include<stdio.h>
int sum_digits(int x);
int main(){
	int x;
	printf("Enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &x);
	printf("\nSum of all digits of %d = %d" ,x,sum_digits(x));

	return 0;
}
int sum_digits (int x){
	int sum=0; int flag;
	while (x!=0){
		flag= x%10;
		sum+=flag;
		x/= 10;
	}
	return sum;
}
