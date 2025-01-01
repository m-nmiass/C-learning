#include <stdio.h>
#include <math.h>

int main ()
{
	double dev, average, y, x ;

	printf ("Enter a positive number : ");
	scanf ("%lf", &x);
	
	y = 1.0 ;
	dev = x/y, average = (y + dev)/2.0;
	
	while (1)
	{
		if (fabs(y - average) < 0.00001)
			break ;
		y = average ;
		dev = x/y ;
		average = (y + dev)/2.0 ;
	}

	printf ("Square root is : %lg", average);
}
