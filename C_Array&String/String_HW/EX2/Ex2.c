/*
 * Ex2.c
 *
 *  Created on: Jul 25, 2023
 *      Author: elsayed
 */
#include<stdio.h>
int main (){
	char string [100];
	int x , y = 0 ;
	printf("\nEnter a string:");
	fflush(stdin); fflush(stdout);
	gets(string);
	for ( x = 0 ; string[x] != '\0' ; x++ ){
		y++;

	}
	printf("\nLength of string: %d" , y);
	return 0 ;
}
