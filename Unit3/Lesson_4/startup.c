//learn-in-depth
//Elsayed tarek

#include "stdint.h"

extern int main(void);
void Rest_Handler(void);
void Default_Handler()
{
	Rest_Handler();
}
void NMI_Handler(void) __attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler(void) __attribute__((weak,alias("Default_Handler")));;

static unsigned long Stack_top[256] ; //256 * 4 = 1028 Bytes


void ( * const P_fn_vectors[]) () __attribute__((section(".vectors"))) =
{
(void(*)()) 	((unsigned long) Stack_top + sizeof(Stack_top)),
&Rest_Handler,
&NMI_Handler, 
&H_Fault_Handler
};

extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;
extern unsigned int _E_text ;

void Rest_Handler (void)
{
	//copy data from ROM to RAM
	unsigned int Data_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
	unsigned char* P_src = (unsigned char*)&_E_text;
	unsigned char* P_dst = (unsigned char*)&_E_DATA;
	for(int i=0; i<Data_size ;i++)
	{
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++) ;
	}
	// init the .bss with zero
	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
	P_dst = (unsigned char*)&_S_bss ;
	for(int i=0 ; i<bss_size ;i++)
	{
		*((unsigned char*)P_dst++) = (unsigned char)0;
	}
// jump to main 
	main();
}
