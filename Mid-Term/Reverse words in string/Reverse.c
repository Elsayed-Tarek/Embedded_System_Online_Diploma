/*
 *
 *
 *  Created on: Aug 13, 2023
 *      Author: Elsayed Tarek
 *
 */


#include<stdio.h>
#include <string.h>
void reverse (char x[]);
int main(){
	char x [100];
	printf("\nEnter a string :");
	fflush(stdin); fflush(stdout);
	gets (x);
	reverse (x);

	return 0;
}
void reverse(char x[] ){
	int flag;
	for (int i =0 ; i < strlen(x); i++){

		if (x[i] == ' '){
			flag = i;
			break;
		}

	}
	printf("\nAfter reverse : %s",&x[flag+1]);
	printf(" ");
	for  (int i=0 ; i<flag ; i++){
		printf("%c" ,x[i]);
	}


}
