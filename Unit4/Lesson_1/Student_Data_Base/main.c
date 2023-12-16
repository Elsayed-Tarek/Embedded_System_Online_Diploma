/*
 * main.c
 *
 *  Created on: Nov 4, 2023
 *      Author: elsayed
 */


#include"List.h"
int main(void)
{
	char temp_text[40] ;

	while(1)
	{
		DPRINTF("\n==================");
		DPRINTF("\nChoose on the following Options");
		DPRINTF("\n 1: AddStudent ");
		DPRINTF("\n 2: DeleteStudent ");
		DPRINTF("\n 3: View_Students ");
		DPRINTF("\n 4: DeleteAll ");
		DPRINTF("\n 5: Get Nth node in the list ");
		DPRINTF("\n 6: Find length of the list ");
		DPRINTF("\n 7: Find the middle of a given list ");
		DPRINTF("\n 8: Reverse the list ");
		DPRINTF("\n==================");
		DPRINTF("\n Enter Option Number: ");

		gets(temp_text);
		DPRINTF("\n==================");
		switch(atoi(temp_text))
		{
		case 1:
			AddStudent();
			break;
		case 2:
			Delete_Student();
			break;
		case 3:
			View_Students();
			break;
		case 4:
			DeleteAll();
			break;
		case 5 :
			GetNth();
			break;
		case 6 :
			Getlength();
			break;
		case 7 :
			FindMiddle();
			break;
		case 8 :
			ReverseList();
			break;
		default:
			DPRINTF("\n Wrong Option");
			break;
		}
	}
}
