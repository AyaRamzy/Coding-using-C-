/* Program to set bit of any number*/
#include <stdio.h>
void main(void)
{
	int num , bit;
	
	/* choise the number and bit that will be set*/
	printf("Enter the number: ");
	scanf("%d",&num);
	
	/* 
	 * choise bit number that will be set
	 * note : bit number start from 0 
	                                     */
	printf("Enter bit number: ");
	scanf("%d",&bit);
	
	num|=(1<<bit);
	/* print the number after set bit */
	printf("Number = %d",num);
	
}
