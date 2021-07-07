#include <stdio.h>
void main(void)
{
	int i,j,swap;
	int arr[10];
	
	for(i=0;i<10;i++)
	{
		printf("Enter the element %d :",i+1);
		scanf("%d",arr[i]);
	}
	
	// Sort array
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>=arr[j])
			{
				swap = arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
				
			}
		}
		
	}
	printf("the mini = %d\n the max = %d",arr[0],arr[9]);
}