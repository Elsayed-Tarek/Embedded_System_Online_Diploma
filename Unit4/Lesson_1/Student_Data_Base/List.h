/*
 * List.h
 *
 *  Created on: Nov 4, 2023
 *      Author: elsayed
 */

#ifndef LIST_H_
#define LIST_H_

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define DPRINTF(...) {fflush(stdin); fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin); fflush(stdout);}


//Data of Student
struct Sdata
{
	int ID;
	char name[40];
	float height;
};

struct SStudent
{
	struct Sdata Student;
	struct SStudent* pNextStudent;
};

//=======APIS======
void AddStudent();
int Delete_Student();
void View_Students();
void DeleteAll();
void GetNth();
void Getlength();
void FindMiddle();
void ReverseList();
void detect_loop();
#endif /* LIST_H_ */
