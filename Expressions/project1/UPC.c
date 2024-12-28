#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, s1, s2, t ;

	printf ("Enter the first digit : ");
	scanf ("%1d", &a);

	printf ("Enter first group of five digits : ");
	scanf ("%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f);

	printf ("Enter second group of five digits : ");
	scanf ("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);
	
	// First sum
	s1 = a + c + e + g + i + k;
	
	// Second sum
	s2 = b + d + f + h + j ;

	s1 = s1 * 3 + s2 ;
	s1 = s1 - 1 ;

	t = s1 % 10 ;
	t = 9 - t ;

	printf ("The check digit is : %d", t);
}
