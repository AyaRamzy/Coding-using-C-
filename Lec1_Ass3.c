/* Include stdio.h library
   to use printf function */

#include <stdio.h>
void main (void)
{
	int a ,b ;
	
	/* call printf and scanf function
	to print intial string with 
	number from user
	*/
	printf("Please Enter number a: ");
	scanf("%d",&a);
	printf("Please Enter number b: ");
	scanf("%d",&b);
	
	/* call printf function 
	to print the value of
	this operations
	*/
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n",a-b);
	printf("a & b = %d\n",a&b);
	printf("a | b = %d\n",a|b);
	printf("a ^ b = %d",a^b);
	
}