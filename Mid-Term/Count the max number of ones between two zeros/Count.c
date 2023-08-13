/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 *
 */
#include <stdio.h>
#include <stdlib.h>
int max_ones (int num);
int main(void) {
	int num;
	printf("Enter a number:");
	fflush(stdin); fflush (stdout);
	scanf("%d",&num);
	printf("Max ones is :%d",max_ones(num));

}
int max_ones (int num)
{
	int count =0;
	while (num!=0)
	{
		num=(num&(num<<1));
		count++;

	}
	return count;
}
