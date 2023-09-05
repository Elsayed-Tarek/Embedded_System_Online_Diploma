/*
 * Ex.c
 *
 *  Created on: Sep 5, 2023
 *      Author: Elsayed Tarek
 */

#include <stdio.h>
#include<string.h>
int main() {
	char alph[27];
	int i;
	char *ptr ;
	ptr = alph;
	for (i=0;i<26;i++){
		*ptr=i+'A';
		ptr++;
	}
	ptr = alph;
	for (i=0;i<26;i++){
		printf("%c\t" ,*ptr);
		ptr++;
	}

	return 0;
}
