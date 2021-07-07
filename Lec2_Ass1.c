/***********************************************************************/
/* Author      : Aya Ramzy                                             */
/* Date        : 26 August 2020                                        */
/* Version     : V01                                                   */
/***********************************************************************/

//include stdio.h to be able use printf and scanf functions
#include <stdio.h>
void main (void)
{
	//declation of variables 
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10 , search;    //num that represents 10 numbers and search represents the search value
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
	printf("Enter Number 2: ");
	scanf("%d",&n2);
	printf("Enter Number 3: ");
	scanf("%d",&n3);
	printf("Enter Number 4: ");
	scanf("%d",&n4);
	printf("Enter Number 5: ");
	scanf("%d",&n5);
	printf("Enter Number 6: ");
	scanf("%d",&n6);
	printf("Enter Number 7: ");
	scanf("%d",&n7);
	printf("Enter Number 8: ");
	scanf("%d",&n8);
	printf("Enter Number 9: ");
	scanf("%d",&n9);
	printf("Enter Number 10: ");
	scanf("%d",&n10);
	printf("Enter the value to search: ");
	scanf("%d",&search);
	
	// check the location of value of searching if it is existed
	if(search == n1)
	{
		printf("Value is exist at element number 1");
	}
	else if(search == n2)
	{
		printf("Value is exist at element number 2");
	}
	else if(search == n3)
	{
		printf("Value is exist at element number 3");
	}
	else if(search == n4)
	{
		printf("Value is exist at element number 4");
	}
	else if(search == n5)
	{
		printf("Value is exist at element number 5");
	}
	else if(search == n6)
	{
		printf("Value is exist at element number 6");
	}
	else if(search == n7)
	{
		printf("Value is exist at element number 7");
	}
	else if(search == n8)
	{
		printf("Value is exist at element number 8");
	}
	else if(search == n9)
	{
		printf("Value is exist at element number 9");
	}
	else if(search == n10)
	{
		printf("Value is exist at element number 10");
	}
	else 
	{
		printf("number no exist");
	}
	
	
}	