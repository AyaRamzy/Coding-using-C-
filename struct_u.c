/******************************************************/
/* Author    : Aya Ramzy                              */
/* Date      : 19 Sep 2020                            */
/* Version   : V01                                    */
/******************************************************/
#include <stdio.h>
#include "STD_TYPES.h"
typedef struct BITS
{
	u8 bit0: 1;
	u8 bit1: 1;
	u8 bit2: 1;
	u8 bit3: 1;
	u8 bit4: 1;
	u8 bit5: 1;
	u8 bit6: 1;
	u8 bit7: 1;
	
}BITS;
typedef union reg
{
	BITS bit;
	u8   byte;
	
}reg;
void main (void)
{
	reg x;
	x.byte=10;
	x.bit.bit0=1;
	printf("%d",x.byte);
}