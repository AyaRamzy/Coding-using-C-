#include <stdio.h>
void main (void)
{
	int x;
	scanf("%d",&x);
	if(x>2 && x<10)
	{
		printf("Yes");
	}
	else 
	{
		printf("out of range");
	}
}