#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	int k=10;
	int * ptr= (int *)malloc(40);
	for(int i=0;i<10;i++)
	{
		ptr[i]=k;
		k++;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",ptr[i]);
	}
	
}