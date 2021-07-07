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
	int id,pw;
	
	printf("Enter your ID : ");
	scanf("%d",&id);
	
	// check the id and password 
	switch(id)
	{
		case 2255666 :
		    printf("Enter password : ");
		    scanf("%d",&pw);
		    if(pw == 33)
			{
				printf("User name : Aya Ramzy");
			}
			else
			{
				printf("Incorrect Password");
			}
		break;	
		case 2354641 :
		    printf("Enter password : ");
		    scanf("%d",&pw);
		    if(pw == 35)
			{
				printf("User name : Nourhan");
			}
			else
			{
				printf("Incorrect Password");
			}
		break;	 
		case 5565954 :
		    printf("Enter password : ");
		    scanf("%d",&pw);
		    if(pw ==99)
			{
				printf("User name : Esraa mohamed");
			}
			else
			{
				printf("Incorrect Password");
			}
		break;	
		case 8456464 :
		    printf("Enter password : ");
		    scanf("%d",&pw);
		    if(pw == 88)
			{
				printf("User name : Rayhana Hany");
			}
			else
			{
				printf("Incorrect Password");
			}
		break;	
		case 2154452 :
		    printf("Enter password : ");
		    scanf("%d",&pw);
		    if(pw == 44)
			{
				printf("User name : Mohamed Ali");
			}
			else
			{
				printf("Incorrect Password");
			}
		break;
		default : printf("Incorrect ID");
	}
	

}	