/***********************************************************************/
/* Author      : Aya Ramzy                                             */
/* Date        : 3 Sep 2020                                            */
/* Version     : V01                                                   */
/***********************************************************************/

/* including stdio library to can use printf and scanf functions */
#include <stdio.h>

int Maxi (int x , int y , int z ,int w);
int Mini (int x , int y , int z ,int w);

void main (void)
{
	int a,b,c,d;
	int mx,mi;
	printf("Enter the Numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	mx= Maxi(a,b,c,d);
	mi= Mini(a,b,c,d);
	printf("The maxi number = %d\n",mx);
	printf("The mini number = %d",mi);
	
	
}

int Maxi (int x , int y , int z ,int w)
{
	if(x>= y && x>= z && x>= w)
	{
		return x;
	}
	else if(y>= x && y>= z && y>= w)
	{
		return y;
	}
	else if(z>= y && z>= x && z>= w)
	{
		return z;
	}
	else
	{
		return w;
	}
}

int Mini (int x , int y , int z ,int w)
{
	if(x<= y && x<= z && x<= w)
	{
		return x;
	}
	else if(y<= x && y<= z && y<= w)
	{
		return y;
	}
	else if(z<= y && z<= x && z<= w)
	{
		return z;
	}
	else
	{
		return w;
	}
}
