#include"stdio.h"
#include"LIFO.h"

Buffer_Status LIFO_IS_Buf_Full (S_LIFO_Buf_t* lBuf)
{
 	//check if the pointer is valid
 	if(!lBuf || !lBuf->head || !lBuf->base)
 	{
 		return LIFO_null;
 	}
 	if(lBuf->head >= (lBuf->base + lBuf->length))
 	{
 		return LIFO_full;
 	}
 	else LIFO_not_full
}
Buffer_Status LIFO_Add_item(S_LIFO_Buf_t* lBuf ,unsigned char item)
{
	//===== check if pointer is valid ======
	if(!lBuf->base || !lBuf->head ||!lBuf)
	{
		return LIFO_null;
	}	
	//===== check if Buffer is full =====
	if(LIFO_IS_Buf_Full(lBuf) == LIFO_full)
	{
		return LIFO_null;
	}
	*(lBuf->head) = item ;
	lBuf->count ++;
	lBuf->head++;

	return LIFO_no_error ;
}
Buffer_Status LIFO_Pop_item(S_LIFO_Buf_t* lBuf,unsigned char* item)
{
	//===== check if pointer is valid ======
	if(!lBuf->base || !lBuf->head ||!lBuf)
	{
		return LIFO_null;
	}	
	//===== check if Buffer is empty =====
	if(lBuf->head == lBuf->base)
	{
		return LIFO_empty ;
	}
	lBuf->head--;
	*item = *(lBuf->head) ;
	lBuf->count--;

	return LIFO_no_error;
}