/*
 * Ex.c
 *
 *  Created on: Jul 31, 2023
 *      Author: elsayed
 */
#include "stdio.h"

int a, b, c;
int i=0;
int prime(int num);


int prime(int num)
{
	int p = 0;
	for (int x = 2; x < num; x++) {
		if (num % x == 0) {
			p = 1;
			break;
		}
	}
	if (num == 2 || num == 3) {
		p = 0;
	}
	return p;
}


int main()
{
	printf("Enter two numbers(intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &a, &b);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between between %d and %d are: ",a, b);

	for(int i=a+1; i<b; i++)
	{
		int p = prime(i);

		if(p==0)
		{
			printf("%d\t" , i);
		}
	}


}

