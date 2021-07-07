#include <stdio.h>
void main (void)
{
	int x;
	scanf("%d",&x);
	switch(x)
	{
		case 1234 : printf("Welcome Ahmed"); break;
		case 5678 : printf("Welcome Youssef"); break;
		case 1145 : printf("Welcome Mina"); break;
		default   : printf("Wrong ");
	}
}