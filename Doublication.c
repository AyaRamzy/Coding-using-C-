#include <stdio.h>
void main (void) 
{
	int arr[10] , freq[10]={0} ,i;
	for(i=0;i<10;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",arr[i]);
		
		++freq[arr[i]];
		if(freq[i]>1)
		{
			printf("%d",i);
			break;
		}
	}
	
}