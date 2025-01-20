#include <stdio.h>

int main ()
{
	float average_float = 0.0f ;
	double average_double = 0.0 ;
	long double average_ldouble = 0.0L ;
	int num ;
	int count = 0 ;

	printf ("Enter five integers : \n");
	while (count < 5)
	{
		scanf ("%d", &num);
		average_float += num ;
		average_double += num ;
		average_ldouble += num ;
		count++ ;
	}

	average_float /= 5.0f ;
	average_double /= 5.0 ;
	average_ldouble /= 5.0L ;

	printf ("The average in float is %.6f", average_float);
	printf ("\nThe average in double is %.12lf", average_double);
	printf ("\nThe average in long double is %.20Lf", average_ldouble);
}
