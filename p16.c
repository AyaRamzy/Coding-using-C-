#include <stdio.h>
void main (void)
{
	int i,num,sum=0;
	float ave=0;
	for(i=0;i<10;i++)
	{   
        printf("nmber-%d :",i);
		scanf("%d",&num);
		sum+=num;
	}
	ave=sum/10.0;
	printf("%d\n",sum);
	printf("%f\n",ave);
    	
}