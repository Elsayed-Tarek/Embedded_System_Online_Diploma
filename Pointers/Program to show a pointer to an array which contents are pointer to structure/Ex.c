/*
 * Ex.c
 *
 *  Created on: Sep 5, 2023
 *      Author: Elsayed tarek
 */

#include <stdio.h>
#include <string.h>

struct Exmployee
{
	char Name[100];
	int ID;
};

int main()
{
	struct Exmployee man = {"Alex", 1002};
	struct Exmployee *p;
	p = &man;
	printf("Exmployee Name: %s\nExmployee ID: %d", p->Name, p->ID);

}
