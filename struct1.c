/******************************************************/
/* Author    : Aya Ramzy                              */
/* Date      : 18 Sep 2020                            */
/* Version   : V01                                    */
/******************************************************/
#include <stdio.h>
#include "STD_TYPES.h"

typedef struct dif
{
	u8   id;
	u32  salary;
	
}dif;
typedef struct emp
{
	u8   id;
	u32  salary;
	
}emp;
dif sum(dif  x,dif  y);
void main (void)
{
	dif arr[2]={{23,1500},{50,6000}};
	arr[0].id=5;
	arr[1].id=3;
	
	/*emp a;  a is object from struct emp
	emp * ptr = &a;
	
	ptr->id  = 25;
	/*dif aya={1,2500};
	dif noha={2,3000};
	dif f= sum(aya,noha);*/
	printf("%d",a.id);*/
	
		
}
dif sum(dif  x,dif  y)
{
	dif z;
	z.id=x.id+y.id;
	z.salary=x.salary+y.salary;
	return z;
}