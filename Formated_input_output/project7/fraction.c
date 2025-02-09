#include <stdio.h>

int main ()
{
	//n for nominator
	//d for denominator
	int n1, n2, n, d1, d2, d ;

	printf ("Enter two fraction seperated by plus sign : ");
	scanf ("%d / %d + %d / %d", &n1, &d1, &n2, &d2);

	n = (n1*d2)+(n2*d1) ;
	d = d2 * d1 ;

	printf ("The sum is %d/%d", n, d);
}
