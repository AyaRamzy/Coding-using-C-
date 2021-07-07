/***********************************************************************/
/* Author      : Aya Ramzy                                             */
/* Date        : 26 August 2020                                        */
/* Version     : V01                                                   */
/***********************************************************************/

//include stdio.h to be able use printf and scanf functions
#include <stdio.h>
void main (void)
{
	//decleration variables
	int f,s,sum; // f represent first number and s second number , sum is their summation
	char i;  // i represent the initial value to loop
	
	for(i=0; i>=0 ;i++)
	{
		printf("Please enter first number ");
		scanf("%d",&f);
		printf("Please enter second number ");
		scanf("%d",&s);
		
		//their summation
		sum = f+s;
		printf("The result is %d\n\n",sum);
	}
	
}