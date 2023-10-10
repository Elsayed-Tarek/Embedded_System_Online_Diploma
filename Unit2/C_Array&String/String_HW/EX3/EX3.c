/*
 * EX3.c
 *
 *  Created on: Jul 25, 2023
 *      Author: elsayed
 */
#include<stdio.h>
int main()
{
	char text[100];
	char string[100];
	int len;
	int i;
	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(text);
	len = strlen(text);
	for( i=0; i<len ; i++)
	{
		string[len-i-1]=text[i];
	}
	printf("Reverse string is : ");
	for(int i=0;i<len ; i++)
	{
		printf("%c",string[i]);
	}
	return 0;
}

