/*
 * main.c
 *
 *  Created on: Oct 31, 2023
 *      Author: elsayed
 */

#include"queue.h"

#define buffer1_length 5
element_type buffer1[buffer1_length];

void main()
{
	FIFO_buf_t uart_fifo ;
	unsigned char i , temp=0;
	if(FIFO_init(&uart_fifo , buffer1, buffer1_length) == FIFO_no_error)
	{
		printf("====FIFO INIT DONE ====\n");
		for(i=0;i<7;i++)
		{
			printf("FIFO ENQUEUE (%x) \n" ,i);
			if(FIFO_enqueue(&uart_fifo,&i) == FIFO_no_error)
				printf("====FIFO ENQUEUE (%x) DONE ====\n",i);
			else
				printf("====FIFO ENQUEUE (%x)FAILED ====\n",i);
		}

		FIFO_print(&uart_fifo);
		FIFO_dequeue(&uart_fifo,&temp);
		printf("FIFO_DEQUEUE : Data=%X \n",temp);
		FIFO_dequeue(&uart_fifo,&temp);
		for(i=0 ; i<2 ; i++)
		{
			printf("FIFO ENQUEue(%x) \n" ,i);
			if(FIFO_enqueue(&uart_fifo,&i) == FIFO_no_error)
				printf("====FIFO ENQUEUE (%x) DONE ====\n",i);
			else
				printf("====FIFO ENQUEUE (%x)FAILED ====\n",i);
		}
		FIFO_print(&uart_fifo);
	}

}

