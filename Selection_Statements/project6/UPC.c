#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, l ;

	printf ("Enter the UPC : ");
	scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

	a = a + c + e + g + i + k ;
	b = b + d + f + h + j ;

	a = (a*3) + b ;
	a-- ;

	a %= 10 ;
	a = 9 - a ;

	a == l ? printf ("Valid") : printf ("NOT VALID");
}
