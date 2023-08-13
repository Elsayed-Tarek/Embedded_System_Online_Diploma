/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 */
#include<stdio.h>
void reverse(int x);
int main(){
	int x;
	printf("Enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&x);
	printf("\nreverse :");
	reverse (x);
	return 0;
}
void reverse (int x){
	static int temp =0 ;

	if(x!=0){
		temp = x%10;
		printf("%d" ,temp);
		reverse(x/=10);
	}

}
