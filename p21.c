#include <stdio.h>
void main (void)
{
	char bit,x;
	printf("Enter the number : ");
	scanf("%d",&x);
	
    printf("Enter bit : ");
	scanf("%d",&bit);
	
	x&=(~(1<<bit));

	printf("%d",x);
	
}