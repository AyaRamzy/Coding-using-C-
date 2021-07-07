#include <stdio.h>


#define x 3

void main(void)
{
	#if   x==2
	    printf("Aya");
	#elif x==1
	    printf("Esraa");
	#else
		#warning "No Answer"
	#endif
}