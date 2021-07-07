/***********************************************************************/
/* Author      : Aya Ramzy                                             */
/* Date        : 27 August 2020                                        */
/* Version     : V01                                                   */
/***********************************************************************/

//include stdio.h to be able use printf and scanf functions
#include <stdio.h>
void main (void)
{
	//decleration variables
	int n,i,j;
	printf("Enter the Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((j==i || j==n-i+1) && ( i<=n/2+1) || (j==n/2+1 && i>n/2))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}