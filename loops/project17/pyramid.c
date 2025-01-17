#include <stdio.h>

int main ()
{
	int i = 1 ;
	int j = 1 ;
	int n ;
	int space ;

	do
	{
		printf ("Enter number bigger than 1 : ");
		scanf ("%d", &n);
		if (n <= 1)
			printf ("Invalid number try again\n");
	}while(n <= 1);

	while (i <= n)
	{
		space = n - i ;
		while (space > 0)
			printf (" "), space-- ;
		while (j <= i)
			printf ("%d ", j), j++ ;
		j = 1 ;
		i++ ;
		space = n - i ;
		printf ("\n");
	}
}
