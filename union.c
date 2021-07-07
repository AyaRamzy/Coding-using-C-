/******************************************************/
/* Author    : Aya Ramzy                              */
/* Date      : 19 Sep 2020                            */
/* Version   : V01                                    */
/******************************************************/
#include <stdio.h>
#include "STD_TYPES.h"
typedef union emp
{
	u32 x;
	u16 y;
	u8  z;
}
void main (void)
{
	emp n1;
	n1.x=12;
	n1.y=13;
}