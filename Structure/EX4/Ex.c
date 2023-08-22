/*
 * Ex.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Elsayed Tarek
 */
#include <stdio.h>
#include<string.h>
struct Sstudent {
	char m_name [10];
	int m_marks;
};
int main(void) {
	struct Sstudent array [10];
	int count ;
	printf("Enter information of students:");
	for(count =0 ;count<10 ;count ++){
		printf("\nFor roll number %d" ,count+1);
		printf("\nEnter name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s" ,&array[count].m_name);
		printf("\nEnter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&array[count].m_marks);
	}
	for ( count=0;count<10;count++){
		printf("\nInformation for roll number %d:" ,count+1);
		printf("\nName: %s",array[count].m_name);
		printf("\nMarks: %d" ,array[count].m_marks);

	}

}
