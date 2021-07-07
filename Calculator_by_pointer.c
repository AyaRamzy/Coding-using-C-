#include <stdio.h>

void func (int x,int y, int * ptr1,int * ptr2, int * ptr3);

void main (void) 
{
	int n1=5,n2=4 ,s,m,sum;
	func(5,4,&sum,&m,&s);
	printf("%d\n%d\n%d",sum,m,s);
}
void func (int x,int y, int * ptr1 ,int * ptr2 , int * ptr3)
{
	*ptr1 = y+x;
	*ptr2 = x*y;
	*ptr3 = x-y;
	
}