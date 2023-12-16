/*
 * main.c
 *
 *  Created on: Oct 31, 2023
 *      Author: elsayed
 */


#include"conio.h"
#include"LIFO.h"


int main()
{
	S_LIFO_Buf_t first_buffer;
	unsigned StaticBuffer [LIFO_bufffer_length] ;
	unsigned char i , temp ;

	//====== INITIALIZATION ======

	first_buffer.base =  (unsigned char*) malloc(5);
	if(!first_buffer.base);


	//set length
	first_buffer.length = 5 ;

	//set buffer head
	first_buffer.head = first_buffer.base ;

	first_buffer.count = 0;

	printf("\n first_buffer (DYNAMIC ALLLOCATION) LIFO_PUSH_item = ");

	for(i=0 ; i<first_buffer.length ; i++)
	{
		printf(" %d," ,i);
		LIFO_Add_item(&first_buffer , i);
	}
	printf("\n first_buffer (DYNAMIC ALLLOCATION) LIFO_POP_item = ");

	for(i=0 ; i<first_buffer.length ; i++)
	{
		LIFO_Pop_item(&first_buffer , &temp);
		printf(" %d," ,temp);
	}








	return 0;
}
