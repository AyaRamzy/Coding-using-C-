/* Program to Rotate */
#include <stdio.h>
void main(void)
{
	int num , bit,z;
	
	/* Enter the numder that will be rotate */
	printf("Enter the number: ");
	scanf("%d",&num);
	z=num;  // assign value of num in z
	
	/* 
	 * choise bit number that will start to shift and  rotate
	 * note : bit number start from 0 
	                                                         */
	printf("Enter bit number: ");
	scanf("%d",&bit);
	
	/* Rotate left */
	num = (num>>bit)|(num<<bit);
	/* print the number after shifting and rotation */
	printf("Number after rotate left = %d\n",num);
	
	/* Rotate right */
	num= (z<<bit)|(z>>bit);
	/* print the number after shifting and rotation */
	printf("Number after rotate right = %d",num);
	
	
}