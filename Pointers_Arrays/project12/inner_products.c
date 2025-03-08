#include <stdio.h>

double inner_products(const double *a, const double *b, int n)
{
	double sum = 0;
	for(double *p = a, *q = b; p < a + n; p++, q++)
		sum += *q * *p;

	return sum ;
}
