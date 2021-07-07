#include <stdio.h>
int sort(int array[10]);
void main(void)
{
	int pass=0,fail=0;
	//random grades 
	int arr1[10]={50,60,20,100,90,95,80,45,46,70};
	int arr2[10]={20,60,30,100,90,95,85,45,46,73};
	int arr3[10]={50,21,20,100,60,95,88,45,46,40};
	
	for(i=0;i<10;i++)
	{
		if(arr1[i]>=50)
		{
			pass++;
			if(arr1[i]<min)
		}
		else
		{
			fail++;
		}
		if(arr2[i]>=50)
		{
			pass++;
		}
		else
		{
			fail++;
		}
		if(arr3[i]>=50)
		{
			pass++;
		}
		else
		{
			fail++;
		}
		
		
	}
	int g1,g2,g3;
	g1=sort(arr1);
	g2=sort(arr2);
	g3=sort(arr3);
	if(g1>=g2 && g1>=g3) printf("%d",
	
}
int sort(int array[10])
{
	int swap,i,j;
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
	printf("the lowest grade = %d\nthe Highest grade = %d",arr[0],arr[9]);
}