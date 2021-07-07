/* Program to clear bit of any number*/
#include <stdio.h>
void main(void)
{
	int num , bit;
	
	/* choise the number and bit that will be clear*/
	printf("Enter the number: ");
	scanf("%d",&num);
	
	/* 
	 * choise bit number that will be clear
	 * note : bit number start from 0 
	                                     */
	printf("Enter bit number: ");
	scanf("%d",&bit);
	
	num&= ~(1<<bit);
	/* print the number after clear bit */
	printf("Number = %d",num);
	
}