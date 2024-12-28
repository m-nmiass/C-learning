#include <stdio.h>

int main ()
{
	int num, swap ;

	printf ("Enter a two digit number : ");
	scanf ("%2d", &num);

	swap = ((num % 10) * 10) + (num / 10) ;

	printf ("The reversal is : %d", swap) ;
}
