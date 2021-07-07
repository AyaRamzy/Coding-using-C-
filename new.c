#include <stdio.h>
int sum2array(int *ptr1,int *ptr2);
void main(void)
{
	int i,s;
	int x[]={1,2,4,6,8};
	int y[]={9,5,3,3,1};
	s=sum2array(x,y);
	printf("%d",s);
	
	
	
}
int sum2array(int *ptr1,int *ptr2)
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum+=ptr1[i]*ptr2[i];
	}
	return sum;
}