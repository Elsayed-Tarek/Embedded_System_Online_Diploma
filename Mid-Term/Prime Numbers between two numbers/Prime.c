/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 *
 */

#include <stdio.h>
void prime (int x,int y);
int main()
{
	int a,b;
	printf("Enter two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d" ,&a,&b);
	prime(a,b);
	return 0;
}
void prime (int x,int y){
	int i , j , z;
	{
		for (i=x+1 ; i<y ; i++){
			z=1;
			for (j=2 ; j<i ; ++j){
				if (i%j == 0){
					z=0;
					break;
				}
			}
			if (z!=0){
				printf("%d\t" ,i);
			}

		}
	}
}
