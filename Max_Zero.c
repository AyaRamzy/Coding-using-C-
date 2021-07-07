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
	char num,zeros,i,read,cnt=0; //num represents the number will be given , zeros is number of zeros
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	//check the number of zeros
	for(i=0 ;i<8 ;i++)
	{
		read = ((num&(1<<i))>>i);
		if(read ==0)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	
}