/*
 * queue.h
 *
 *  Created on: Oct 31, 2023
 *      Author: elsayed
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "stdio.h"
#include "stdint.h"

//user configuration
//select the element type (uint8_t, uint16_t, ... )

#define element_type uint8_t

//FIFO Data types

typedef struct
{
	unsigned int length ;
	element_type* base;
	element_type* tail;
	element_type* head;
	unsigned int count;

}FIFO_buf_t;

typedef enum
{
	FIFO_no_error ,
	FIFO_full ,
	FIFO_empty ,
	FIFO_null
}E_Buffer_Status;


//FIFO APIS

E_Buffer_Status FIFO_enqueue (FIFO_buf_t* fifo , element_type* ENQ_data) ;
E_Buffer_Status FIFO_dequeue (FIFO_buf_t* fifo , element_type* DEQ_data) ;
E_Buffer_Status FIFO_IS_Buf_Full (FIFO_buf_t* fifo) ;
void FIFO_print(FIFO_buf_t* fifo) ;
E_Buffer_Status FIFO_init (FIFO_buf_t* fifo, element_type* buff , uint32_t buff_length) ;

#endif /* QUEUE_H_ */
