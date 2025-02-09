#include <stdio.h>

int main ()
{
	int n ;
	int i = 1 ;
	int j = 1 ;
	int spaces ;

	do
	{
		printf ("Enter a number bigger than 1 : ");
		scanf ("%d", &n);
		if (n <= 1)
			printf ("Invalid number, try again\n");
	}while (n <= 1);

	while (i <= n)
	{
		spaces = n - i ;
		while (spaces)
			printf (" "), spaces--;
		while (j <= i)
			printf ("%d ", j), j++;
		i++;
		j = 1;
		printf ("\n");
	}
	i -= 2;

	while (i >= 1)
	{
		spaces = n - i;
		while (spaces)
			printf (" "), spaces--;
		while (j <= i)
			printf ("%d ", j), j++;
		i--;
		j = 1;
		printf ("\n");
	}
}
