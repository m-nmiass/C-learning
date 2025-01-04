#include <stdio.h>

double average (double a, double b)
{
	return (a + b)/2 ;
}

int main ()
{
	double num1 ;
	double num2 ;
	double num3 ;

	printf ("Enter three numbers : ");
	scanf ("%lf %lf %lf", &num1, &num2, &num3);

	printf ("Average of %g and %g is %g\n", num1, num2, average(num1,num2));
	printf ("Average of %g and %g is %g\n", num2, num3, average(num2,num3));
	printf ("Average of %g and %g is %g\n", num1, num3, average(num1,num3));
}
