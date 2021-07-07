#include <stdio.h>
void main (void)
{
	 char x,r;
	scanf("%d",&x);
	r= (x & (1<<7))>>7;
	printf("%d",r);
	
}