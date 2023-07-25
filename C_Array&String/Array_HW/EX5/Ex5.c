/*
 * Ex5.c
 *
 *  Created on: Jul 24, 2023
 *      Author: elsayed
 */

/*
 * Ex5.c
 *
 *  Created on: Jul 24, 2023
 *      Author: elsayed
 */
#include<stdio.h>
void main(){
	int x,y ,i;
	int a[100];
	printf("Enter no of elements");
	fflush (stdin);
	fflush (stdout);
	scanf("%d ",&x);
	for (i=0 ; i<x ; i++){
		scanf("%d" ,&a[i]);
	}
	printf("\n Enter the element to be searched :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	for (i=0 ; i<x ; i++){
		if (y == a[i]) {
			printf("\nnumber found at the location = %d" , i+1);

		}
	}
}

