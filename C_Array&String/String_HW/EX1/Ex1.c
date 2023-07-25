/*
 * Ex1.c
 *
 *  Created on: Jul 24, 2023
 *      Author: elsayed
 */
#include<stdio.h>
int main(){
	char text [100];
	char x;
	int i, c=0 ;
	printf("\nEnter a string ");
	fflush(stdin); fflush(stdout);
	gets(text);
	printf("\nEnter a character to find frequency:");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&x);
	for ( i=0 ; text[i] !='\0' ; i++){
		if (x==text[i])
			c++ ;
	}
	printf("\n Frequency of %c = %d " ,x ,c);
	return 0;

}

