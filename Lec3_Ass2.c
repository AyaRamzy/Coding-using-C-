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
	int id , pw ;
	char i;
	
		printf("Please Enter your ID: ");
		scanf("%d",&id);
		
		switch(id)
		{
			case 1234 :
			
			   printf("Please Enter password: ");	
               scanf("%d",&pw);	
			   
			   if(pw == 7788)
			   {
				   printf("Welcome Ahmed");
				   break;
			   }
			   else
			   {
				   for(i=0;i<2;i++)
				   {
				     printf("Try again: ");
					 scanf("%d",&pw);
					 if(pw == 7788)
			           {
				        printf("Welcome Ahmed");
				        break;
			           }
					 
			       }
				   
				   printf("Incorrect password for 3 times , No more tries");  
			       break;
				   
				   
			   }
			  
			
			   
			case 5678 :
			
			   printf("Please Enter password: ");	
               scanf("%d",&pw);	
			   
			   if(pw == 5566)
			   {
				   printf("Welcome Amr");
				   break;
			   }
			   else
			   {
				   for(i=0;i<2;i++)
				   {
				     printf("Try again: ");
					 scanf("%d",&pw);
					 if(pw == 5566)
			           {
				        printf("Welcome Amr");
				        break;
			           }
					 
			       }
				   
				   printf("Incorrect password for 3 times , No more tries");  
			       break;
				   
				   
			   }
			
			case 9870 :
			
			    printf("Please Enter password: ");	
               scanf("%d",&pw);	
			   
			   if(pw == 1122 )
			   {
				   printf("Welcome Wael");
				   break;
			   }
			   else
			   {
				   for(i=0;i<2;i++)
				   {
				     printf("Try again: ");
					 scanf("%d",&pw);
					 if(pw == 1122 )
			           {
				        printf("Welcome Wael");
				        break;
			           }
					 
			       }
				   
				   printf("Incorrect password for 3 times , No more tries");  
			       break;
				   
				   
			   }
			
			default : printf("You are not registered");
			
		}
	
}