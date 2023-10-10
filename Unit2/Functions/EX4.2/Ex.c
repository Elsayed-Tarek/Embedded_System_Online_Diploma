/*
 * Ex.c
 *
 *  Created on: Jul 31, 2023
 *      Author: elsayed
 */
#include <stdio.h>
int Power (int base , int power);
int main(){
	int base , power ;
	printf("Enter base number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&base);
	printf("\nEnter power number(positive integer) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&power);
	printf("\n%d ^ %d = %d " , base , power , Power (base , power));

	return 0 ;
}
int Power (int base , int power){
	if (power != 0){
		return  (base*Power(base,power-1));
	}
	else return 1;
}
