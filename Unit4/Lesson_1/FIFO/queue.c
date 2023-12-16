/*
 * queue.c
 *
 *  Created on: Oct 31, 2023
 *      Author: elsayed
 */


/*
 * queue.c
 *
 *  Created on: Oct 31, 2023
 *      Author: elsayed
 *
 *
 *      */
#include"queue.h"
E_Buffer_Status FIFO_IS_Buf_Full (FIFO_buf_t* fifo)
{
	// ---- check if FIFO exist
	if(!fifo->base || !fifo->tail || !fifo->head)
	{
		return FIFO_null ;
	}
	if(fifo->count >= fifo->length)
	{
		printf("FIFO is Full\n");
		return FIFO_full;
	}
	return FIFO_no_error ;
}
E_Buffer_Status FIFO_enqueue (FIFO_buf_t* fifo , element_type* ENQ_data )
{
	if(FIFO_IS_Buf_Full(fifo) == FIFO_no_error)
	{
		*(fifo->head) = *ENQ_data ;
		fifo->count ++ ;

		//----Circular FIFO
		if(fifo->head == fifo->base + (fifo->length * sizeof(element_type)))
			fifo->head = fifo->base ;
		else
			fifo->head++ ;

		return FIFO_no_error ;

	}else
	{
		printf("FIFO ENQUEUE FAILED\n");
		return(FIFO_IS_Buf_Full(fifo));
	}
}
E_Buffer_Status FIFO_dequeue (FIFO_buf_t* fifo , element_type* DEQ_data)
{
	//----check if FIFO exist
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null ;
	//check if buffer is empty
	if(fifo->count == 0)
	{
		printf("FIFO IS EMPTY\n");
		return FIFO_empty ;
	}
	*DEQ_data = *fifo->tail;
	fifo->count--;
	//----Circular FIFO
	if(fifo->tail == (fifo->tail + (fifo->length *sizeof(element_type))))
		fifo->tail = fifo->base;
	else
		fifo->tail++;
	return FIFO_no_error;
}
void FIFO_print(FIFO_buf_t* fifo)
{
	element_type* temp;
	int i;
	if(fifo->count == 0)
	{
		printf("FIFO IS EMPTY\n");
		return FIFO_empty;
	}
	temp = fifo->tail ;
	printf("\n=====FIFO_PRINT=====\n");
	for( i=0; i < fifo->count ;i++){
		printf("\t %X \n" ,*temp);
		temp++;
	}
	printf("\n=======\n");
}
E_Buffer_Status FIFO_init (FIFO_buf_t* fifo, element_type* buff , uint32_t buff_length)
{
	fifo->base = buff;
	fifo->head = fifo->base;
	fifo->tail = fifo->base;
	fifo->length = buff_length;
	fifo->count = 0 ;
	if(fifo->base && fifo->length)
		return FIFO_no_error ;
	else
		return FIFO_null ;
}
