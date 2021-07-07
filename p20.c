#include <stdio.h>
void main (void)
{
	char bit,x,r;
	printf("Enter the number : ");
	scanf("%d",&x);
	
    printf("Enter bit : ");
	scanf("%d",&bit);
	r= (x & (1<<bit))>>bit;
	
	printf("%d",r);
	
}