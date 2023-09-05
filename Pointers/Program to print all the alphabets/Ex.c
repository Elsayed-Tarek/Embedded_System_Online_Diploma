/*
 * Ex.c
 *
 *  Created on: Sep 5, 2023
 *      Author: Elsayed Tarek
 */

#include <stdio.h>
#include<string.h>
int main() {
	char s = 'A';
	char* p ;
	p=&s;
	for (int i=1 ; i<=26 ; i++){
		printf("%c\t" ,*p);
		s++;
	}
}

