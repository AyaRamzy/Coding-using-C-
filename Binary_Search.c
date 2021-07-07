#include <stdio.h>
void main (void) 
{
	int start , end , mid,swap,i,j,search;
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter the element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the search : ");
	scanf("%d",&search);
	
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
	// print array after sort
	for(i=0;i<10;i++)
	{
		printf("the element %d : %d\n",i+1,arr[i]);

	}
    start = 0;           //index of the first element
	end   = 9;           //index of the last element
	mid = (start+end)/2; //index of the last element*/	
	while(start <= end)
	{
		if(arr[mid]<search)
		{
			start = mid+1;
		}
		else if(arr[mid]==search)
		{
			printf("the lacation of search number = %d ",mid+1);
			break;
				
		}
		else
		{			
			end = mid-1;
		}
        mid = (start+end)/2;		
		
	}
}

