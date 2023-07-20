/*
 * Ex2.c
 *
 *  Created on: Jul 20, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main()
{
	char Alphabet ;
	printf("Enter an alphabet \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &Alphabet);
	switch (Alphabet)
	{
	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'i' :
	case 'I' :
	case 'O' :
	case 'o' :
	case 'U' :
	case 'u' :
	{
		printf("%c is a vowel" , Alphabet);
	}
	break ;
	default :
		printf("%c is a consonant",Alphabet);
	}
}


