#include <stdio.h>

int main ()
{
	int n, square ;

	printf ("This program prints a table of squares.\nEnter number of intries in table : ");
	scanf ("%d", &square);
	n = 1 ;

	while (n <= square)
	{
		printf ("%d\t\t%d\n", n, n*n);
		n++;
	}
}
