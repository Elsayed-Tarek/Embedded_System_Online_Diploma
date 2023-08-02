/*
 * Ex.c
 *
 *  Created on: Jul 30, 2023
 *      Author: elsayed
 */
#include <stdio.h>
#include <stdlib.h>

void rev();
int main() {

	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	rev();
	return 0;
}

void rev() {
	char c;
	scanf("%c", &c);
	if (c != '\n') {
		rev();
		printf("%c", c);
	}
}
