#include <stdio.h>
void main (void)
{
	int x ,s;
	printf("Please Enter your Working hours: ");
	scanf("%d",&x);
	s=50*x;
	if(x>40)
	{
		printf("your salary is %d",s);
	}
	else
	{
		s=s*0.9;
		printf("your salary is %d",s);
	}	

}