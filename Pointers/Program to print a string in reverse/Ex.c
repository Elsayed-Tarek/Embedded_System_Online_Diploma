/*
 * Ex.c
 *
 *  Created on: Sep 5, 2023
 *      Author: Elsayed Tarek
 */

#include <stdio.h>
#include<string.h>
int main() {
	char str1[50];
	char revstr[50];
	char *stptr = str1;
	char* rvptr = revstr;
	int i=-1;
	printf("Input a string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s" ,str1);
	while(*stptr){
		stptr++;
		i++;
	}
	while(i>=0){
		stptr--;
		*rvptr = *stptr;
		rvptr++;
		--i;
	}
	*rvptr ='\0';
	printf("\nReverse of the string is : %s" ,revstr);
	return 0;
}

