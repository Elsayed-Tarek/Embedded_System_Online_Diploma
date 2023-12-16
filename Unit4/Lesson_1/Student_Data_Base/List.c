/*
 * List.c
 *
 *  Created on: Nov 4, 2023
 *      Author: elsayed
 */


#include"List.h"
struct SStudent* gpFirstStudent = NULL ;
void fill_the_record(struct SStudent* new_student)
{
	char temp_text[40];
	DPRINTF("\n Enter Student ID: ");
	gets(temp_text);
	new_student->Student.ID = atoi(temp_text);
	DPRINTF("\n Enter Student Name: ");
	gets(new_student->Student.name);
	DPRINTF("\n Enter the height: ");
	gets(temp_text);
	new_student->Student.height = atof(temp_text);

}

void AddStudent()
{
	struct SStudent* pLastStudent;
	struct SStudent* pNewStudent;
	//check if list is empty
	if(gpFirstStudent == NULL)
	{
		//create the first record
		pNewStudent = (struct SStudent* )malloc(sizeof(struct SStudent));

		//Assign the gpFirstStudent to it
		gpFirstStudent = pNewStudent;
	}
	else //if the list contains any records
	{
		//Navigate until the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->pNextStudent)
		{
			pLastStudent= pLastStudent->pNextStudent ;

		}
		//create new record
		pNewStudent = (struct SStudent* )malloc(sizeof(struct SStudent));
		//Assign the pNextStudent to it
		pLastStudent->pNextStudent = pNewStudent ;
	}
	//fill the record
	fill_the_record(pNewStudent);
	//set the next record to NULL
	pNewStudent->pNextStudent = NULL ;
}
int Delete_Student()
{
	char temp_text[40];
	int selected_ID;
	DPRINTF("\n Enter the Student ID to be deleted: ");
	gets(temp_text);
	selected_ID = atoi(temp_text);

	//loop on all records from gpFirstStudent
	if(gpFirstStudent) //Check if the list has any records
	{
		struct SStudent* pSelectedStudent;
		struct SStudent* pPreviousStudent = NULL;
		pSelectedStudent = gpFirstStudent ;
		while(pSelectedStudent)
		{

			if(pSelectedStudent->Student.ID == selected_ID)
			{
				if(pPreviousStudent)

				{
					pPreviousStudent = pSelectedStudent->pNextStudent;
				}
				else
				{
					gpFirstStudent = pSelectedStudent->pNextStudent;
				}
				free(pSelectedStudent);
				return 1;
			}
			//Store previous record pointer
			pPreviousStudent = pSelectedStudent ;
			pSelectedStudent = pSelectedStudent->pNextStudent;
		}
		DPRINTF("\n Can't find Student ID. ");
		return 0 ;

	}
	DPRINTF("\n EMPTY LIST. ");
	return 0 ;
}
void View_Students()
{
	struct SStudent* pCurrent;
	pCurrent = gpFirstStudent;
	int count =0;

	//Check if its empty
	if(gpFirstStudent == NULL)
		DPRINTF("\nEMPTY LIST");

	//loop all records in list

	while(pCurrent)
	{
		DPRINTF("\nrecord %d" , count+1);
		DPRINTF("\nStudent ID : %d" ,pCurrent->Student.ID);
		DPRINTF("\nStudent Full Name : %s" ,pCurrent->Student.name);
		DPRINTF("\nStudent height : %.2f" ,pCurrent->Student.height);
		pCurrent = pCurrent->pNextStudent;
		count++;
	}
}
void DeleteAll()
{
	struct SStudent* pCurrent = gpFirstStudent ;
	if(gpFirstStudent == NULL)
		DPRINTF("\nEMPTY LIST");
	while(gpFirstStudent)
	{
		struct SStudent* pTemp = pCurrent ;
		pCurrent = pCurrent->pNextStudent;
		free(pTemp) ;
	}
	gpFirstStudent = NULL ;
}

void GetNth()
{
	int x;
	int count = 0 ;
	char temp_text[40];
	DPRINTF("\nEnter the Nth node to get : ");
	gets(temp_text);
	x=atoi(temp_text);
	if(gpFirstStudent == NULL)
	{
		DPRINTF("EMPTY LIST.");

	}
	else
	{
		while(gpFirstStudent)
		{
			struct SStudent* pCurrentStudent = gpFirstStudent ;
			if(count == x)
			{
				DPRINTF("\nrecord %d" , count+1);
				DPRINTF("\nStudent ID : %d" ,pCurrentStudent->Student.ID);
				DPRINTF("\nStudent Full Name : %s" ,pCurrentStudent->Student.name);
				DPRINTF("\nStudent height : %.2f" ,pCurrentStudent->Student.height);
				count++;
				pCurrentStudent = pCurrentStudent->pNextStudent;
			}
			else
				gpFirstStudent = gpFirstStudent->pNextStudent ;
		}
	}
}
void Getlength()
{
	int count = 0;
	struct SStudent* Current = gpFirstStudent;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\nEMPTY LIST.");
	}
	else
	{
		while(Current)
		{
			Current = Current->pNextStudent ;
			count++;
		}
		DPRINTF("\nThe length of the list = %d",count);
	}
}
void FindMiddle()
{
	struct SStudent* pMiddle;
	struct SStudent* pFast = gpFirstStudent;
	if(pFast != NULL)
	{
		pFast = gpFirstStudent->pNextStudent->pNextStudent;
		pMiddle = gpFirstStudent->pNextStudent;
		gpFirstStudent->pNextStudent = gpFirstStudent;
	}
	DPRINTF("\nThe middle of the list : ");
	DPRINTF("\nStudent ID : %d" ,pMiddle->Student.ID);
	DPRINTF("\nStudent Full Name : %s" ,pMiddle->Student.name);
	DPRINTF("\nStudent height : %.2f" ,pMiddle->Student.height);
}
void ReverseList()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	struct SStudent* pPreviousStudent= pCurrentStudent;
	struct SStudent* pTemp =pCurrentStudent->pNextStudent;


	while(pCurrentStudent){

		//check if database has only one record
		if(!(gpFirstStudent->pNextStudent))
			break;


		pCurrentStudent = pTemp;
		pTemp = pTemp->pNextStudent;


		if(pTemp){
			pCurrentStudent->pNextStudent = pPreviousStudent;

			if(pPreviousStudent == gpFirstStudent)
				pPreviousStudent->pNextStudent = NULL;


			pPreviousStudent = pCurrentStudent;


		}else{

			if(pPreviousStudent == gpFirstStudent)
				pPreviousStudent->pNextStudent = NULL;

			//make the end the beginning
			gpFirstStudent = pCurrentStudent;

			//reverse
			pCurrentStudent->pNextStudent = pPreviousStudent;

			break;
		}

	}

	printf("\n=== Database Is Reversed ===");
}


