#include <stdio.h>

int main ()
{
	int n ;
	int first = 0 ;
	int second = 1 ;
	int temp = first ;

	do
	{
		printf ("Enter a positive number bigger then 1 : ");
		scanf ("%d", &n);
	}while (n <= 1);

	while (second <= n)
	{
		printf ("%d  %d  ", first, second );
		first += second ;
		second += first ;
		temp = first ;
	}

	return 0 ;
}
