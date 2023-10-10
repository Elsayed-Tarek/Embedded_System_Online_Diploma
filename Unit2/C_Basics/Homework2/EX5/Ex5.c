/*
 * Ex5.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main()
{
	char alphabet ;
	printf(" Enter a character \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&alphabet);
	if (((alphabet>='a') && (alphabet <= 'z' )) || ((alphabet>='A') && (alphabet <= 'Z')) )
	{
		printf("%c is an alphabet\r\n",alphabet);
	}
	else printf("%c is not an alphabet\r\n " ,alphabet);

}

