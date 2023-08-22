/*
 * Ex.c
 *
 *  Created on: Aug 21, 2023
 *      Author: Elsayed Tarek
 */

#include<stdio.h>
#include<string.h>
struct Scomplex {
	float m_real ;
	float m_imaginary;
};
struct Scomplex read (char name []){
	struct Scomplex a;
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f" ,&a.m_real ,&a.m_imaginary);
	return a;
};
struct Scomplex addnumbers (struct Scomplex a , struct Scomplex b){
	struct Scomplex result;
	result.m_real = a.m_real + b.m_real;
	result.m_imaginary = a.m_imaginary + b.m_imaginary;
	return result;
};
int main (void){
	struct Scomplex a , b , c ;
	printf("For 1st complex number");
	a = read ("a");
	printf("\nFor 2nd complex number");
	b = read ("b");
	c = addnumbers (a,b);
	printf("\nSum = %.1f + %.1fi" ,c.m_real,c.m_imaginary);
}
