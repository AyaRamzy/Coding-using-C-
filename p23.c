#include <stdio.h>

int multi(int x , int y);
void main(void)
{
	int n;
	n=multi(2,5);
	printf("%d",n);
	
}
int multi(int x , int y)
{
	int m;
	m=x*y;
	return m;
}