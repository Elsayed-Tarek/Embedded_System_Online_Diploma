/*
 * Ex.c
 *
 *  Created on: Aug 21, 2023
 *      Author: Elsayed Tarek
 */
#include<stdio.h>
#include<string.h>

struct Sstudent {
	char m_name [100];
	int m_roll ;
	float m_marks;
};
struct Sstudent Sreaddata(char x[]) {
	struct Sstudent s;
	printf("Enter information os students :");
	printf("\nEnter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s" ,&s.m_name);
	printf("\nEnter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&s.m_roll);
	printf("\nEnter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f" ,&s.m_marks);
	return s;
};
void print(struct Sstudent s) {
	printf("\nName: %s" ,s.m_name);
	printf("\nRoll: %d" ,s.m_roll);
	printf("\nMarks: %.2f" ,s.m_marks);
};
int main(void){
	struct Sstudent s;
	s = Sreaddata ("s");
	print(s);

}
