#include <stdio.h>

int main ()
{
	double num, sum ;

	sum = 0 ;
	printf ("Enter numbers : ");

	do
	{
		scanf ("%lf", &num);
		sum += num ;
	}while (num) ;

	printf ("The sum of numbers is : %lg", sum);
}
