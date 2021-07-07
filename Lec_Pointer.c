#include <stdio.h>
int sort(int n,int *ptr);
void main (void)
{
	int s;
	scanf("%d",&s);
	int array[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",array);
	}
	sort(s,array);
	for(i=0;i<s;i++)
	{
		printf("%d",arr[i]);
	}
	
}
int sort(int n,int *ptr)
{
	int i,j,swap;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>=arr[j])
			{
				swap = ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=swap;
			}
		}
	}
}