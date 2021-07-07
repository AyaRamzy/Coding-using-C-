/***********************************************************************/
/* Author      : Aya Ramzy                                             */
/* Date        : 26 August 2020                                        */
/* Version     : V01                                                   */
/***********************************************************************/

//include stdio.h to be able use printf and scanf functions
#include <stdio.h>
void main (void)
{
	//decleration of variables
	int n1,n2,n3;
	
	printf("Enter Nmuber 1: ");
	scanf("%d",&n1);
	
	printf("Enter Nmuber 2: ");
	scanf("%d",&n2);
	
	printf("Enter Nmuber 3: ");
	scanf("%d",&n3);
	
	// chech the max numder of those 
	if((n1 >= n2) && (n1 >=n3))
	{
		printf("Maximum number is %d",n1);
	}
	else if((n2 >= n1) && (n2 >=n3))
	{
		printf("Maximum number is %d",n2);
	}
	else 
	{
		printf("Maximum number is %d",n3);
	}
}