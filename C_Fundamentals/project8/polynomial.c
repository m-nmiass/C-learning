#include <stdio.h>

int main ()
{
	int x, result ;

	printf ("Enter the x value : ");
	scanf ("%d", &x);

	result = (3*x*x*x*x*x) - (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6 ;

	printf ("The result of the polynomial is : %d", result);
}
