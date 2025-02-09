#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, check ;

	printf ("Enter the first 11 digits of a UPC : ");
	scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
	
	a = a + c + e + g + i + k ;
	b = b + d + f + h + j ;

	a *= 3 ;
	check = a + b - 1 ;
	check = check % 10 ;
	check = 9 - check ;

	printf ("The check number is : %d", check);
}
