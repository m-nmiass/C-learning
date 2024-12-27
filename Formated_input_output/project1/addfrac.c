#include <stdio.h>

int main ()
{
	//d for denomater 
	//n for nominator 

	int n1, n2, d1, d2, n, d ;

	printf ("Enter the first fraction : ");
	scanf ("%d / %d", &n1, &d1);

	printf ("Enter the second fraction : ");
	scanf ("%d / %d", &n2, &d2);

	n = (n1 * d2) + (n2 * d1) ;
	d = d1 * d2 ;

	printf ("The result is %d/%d", n, d);
}
