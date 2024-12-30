#include <stdio.h>

int main ()
{
	float a, largest ;
	largest = 0 ;

	do
	{
		printf ("Enter a number : ");
		scanf ("%f", &a);
		if (largest < a) largest = a ;
	}while(a);

	printf ("The largest number entered was %g", largest);
}

