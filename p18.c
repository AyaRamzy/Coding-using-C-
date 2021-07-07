#include <stdio.h>
void main (void)
{
	int n1,n2,ch,sum=0;
	
	while(1)
	{
	   scanf("%d %d",&n1,&n2);
	   sum=n1+n2;
	   printf("Enter your choise : ");
	   scanf("%d",&ch);
	   if(ch==1)
	   {
		   printf("%d",sum);
	   }
	   else
	   {
		   break;
	   }
	  
	} 
}	