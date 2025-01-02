#include <stdio.h>

int main ()
{
	int num ;
	long long int factorial ;

	factorial = 1 ;

	printf ("Enter a positive integer : ");
	scanf ("%d", &num );
	printf ("Factorial of %d is : ", num) ;

	while (num)
		factorial *= num , num-- ;
	
	printf ("%lli", factorial);
}
