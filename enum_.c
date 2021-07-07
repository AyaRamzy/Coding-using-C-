/******************************************************/
/* Author    : Aya Ramzy                              */
/* Date      : 19 Sep 2020                            */
/* Version   : V01                                    */
/******************************************************/
#include <stdio.h>
#include "STD_TYPES.h"
typedef enum //size of int
{
	sat,
	sun,
	mon,
	tue,
	wen,
	thu,
	fri
}days;
void main (void)
{
	days day; //4bytes
	day =mon+1;
	printf("%d",day);
}