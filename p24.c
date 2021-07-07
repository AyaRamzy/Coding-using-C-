#include <stdio.h>
void maxi(int x, int y);
void main (void)
{
	
	maxi(10,20);
}
void maxi(int x, int y)
{
	if(x>y)
	{
		printf("%d",x);
		
	}
	else
	{
		printf("%d",y);
	}
}