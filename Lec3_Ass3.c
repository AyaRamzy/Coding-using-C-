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
	int row,c,n;
	
	printf("Please Enter the hieght of the pyramid: ");
	scanf("%d",&n);
	
	for (row = 1; row <= n; row++)  // Loop to print rows
    {
        for (c = 1; c <= n-row; c++)  // Loop to print spaces in a row
		{
           printf(" ");
		}
        for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
        {
           printf("*");
		}
          printf("\n");
		
    }
 
	
}