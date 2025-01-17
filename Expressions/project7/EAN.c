#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, l, check ;

	printf ("Enter the first 12 digits : ");
	scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &e, &f, &g, &h, &i, &j, &k, &l);

	a = a + c + e + g + i + k ;
	b = b + d + f + h + j + l ;
	a = (b * 3) + a ;
	check = --a ;

	check %= 10 ;
	check = 9 - check ; 

	printf ("The check digit is : %d", check);
}
