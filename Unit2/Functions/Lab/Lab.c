/*
 * Lab.c
 *
 *  Created on: Jul 30, 2023
 *      Author: elsayed
 */
#include <stdio.h>
void func (){
	int i , j ;
	for ( i = 0 ; i <=9 ; i++){
		for ( j=i ; j <=9 ; j++){
			printf ("%d\t", j);
		}
		printf("\n");
	}
}
int main (){
	func();
	return 0 ;
}
