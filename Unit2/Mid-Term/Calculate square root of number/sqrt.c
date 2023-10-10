/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 */
#include<stdio.h>
#include<math.h>
float Sqrt(int x);
int main(){
	int x;
	printf("Enter an integer number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&x);
	printf("\nSquare root of %d = %.3f" ,x,Sqrt(x));

	return 0;
}
float Sqrt(int x){

	float s;
	s = pow(2,0.5*log2(x));
	return s ;
}
