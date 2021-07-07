/***********************************************************************/
/* Author      : Aya Ramzy                                             */
/* Date        : 3 Sep 2020                                            */
/* Version     : V01                                                   */
/***********************************************************************/

/* including stdio library to can use printf and scanf functions */
#include <stdio.h>

int Add      (int op1 ,int op2);
int Subtract (int op1 ,int op2);
int Multiply (int op1 ,int op2);
int Divide   (int op1 ,int op2);
int And      (int op1 ,int op2);
int Or       (int op1 ,int op2);
int Xor      (int op1 ,int op2);
int reminder (int op1 ,int op2);
int Increment(int op1 );
int Decrement(int op1 );
int Not      (int op1 );

void main(void)
{
	int id,a,op1,op2;
	/* Options :
	 * 1    Add      
     * 2    Subtract  
     * 3    Multiply 
     * 4    Divide   
     * 5    And       
     * 6    Or       
	 * 7    Not       
     * 8    Xor       
     * 9    reminder  
     * 10   Increment  
     * 11   Decrement  
	*/
	printf("Enter ID of the Operation you want : ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 1  :
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =Add(op1, op2);
			 printf("The Result = %d",a);
			 break;
		case 2  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =Subtract(op1 ,op2);
			 printf("The Result = %d",a);
			 break;
		case 3  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =Multiply ( op1 , op2);
			 printf("The Result = %d",a);
			 break;
		case 4  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =Divide (op1 , op2);
			 printf("The Result = %d",a);
			 break;
		case 5  : 
			 printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =And (op1 , op2);
			 printf("The Result = %d",a);
			 break;
		case 6  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =Or (op1 ,op2);
			 printf("The Result = %d",a);
			 break;
		case 7  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 a =Not (op1 );
			 printf("The Result = %d",a);
			 break;
		case 8  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =Xor(op1 , op2);
			 printf("The Result = %d",a);
			 break;
		case 9  : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 printf("Enter Operand 2 : ");
			 scanf ("%d",&op2);
			 a =reminder (op1 , op2);
			 printf("The Result = %d",a);
			 break;
		case 10 : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 a =Increment( op1 );
			 printf("The Result = %d",a);
			 break;
		case 11 : 
		     printf("Enter Operand 1 : ");
			 scanf ("%d",&op1);
			 a =Decrement( op1 );
			 printf("The Result = %d",a);
			 break;
		default :
		     printf("Invalid");
			 break;
	}
}

int Add      (int op1 ,int op2)	
{
	return op1+op2;
}
int Subtract (int op1 ,int op2)
{
	return op1-op2;
}
int Multiply (int op1 ,int op2)
{
	return op1*op2;
}
int Divide   (int op1 ,int op2)
{
	return op1/op2;
}
int And      (int op1 ,int op2)
{
	return op1&op2;
}
int Or       (int op1 ,int op2)
{
	return op1|op2;
}
int Xor      (int op1 ,int op2)
{
	return op1^op2;
}
int reminder (int op1 ,int op2)
{
	return op1%op2;
}
int Increment(int op1 )
{
	return ++op1;
}
int Decrement(int op1 )
{
	return --op1;
}
int Not      (int op1 )
{
	return ~op1;
}
