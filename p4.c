#include <stdio.h>

void main (void )
{
	int x=10;
	int y;
	
	printf("y= %d\n",y=x++);
	printf("y= %d\n",y=++x);
	printf("y= %d\n",y=--x);
	printf("y= %d\n",y=x--);
	printf("y= %d\n",y);
}