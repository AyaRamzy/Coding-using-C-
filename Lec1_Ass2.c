/* Include stdio.h library
   to use printf function */
   
#include <stdio.h>
void main (void)
{
    int num1 , num2 , num3 ;
	
	/*
	* Call printf and scanf function
	* to print initial string and 
	* scan 3 numbers from user     
	*/
	
	printf("Please enter number 1: ");
	scanf("%d",&num1);
	printf("Please enter number 2: ");
	scanf("%d",&num2);
	printf("Please enter number 3: ");
	scanf("%d",&num3);
	
	/* call printf function 
	to print values of 3 numbers
	*/
	printf("number 3: %d\n",num3);
	printf("number 2: %d\n",num2);
	printf("number 1: %d\n",num1);
}