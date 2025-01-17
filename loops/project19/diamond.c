#include <stdio.h>

int main ()
{
	int i = 1 ;
	int j = 1 ;
	int n ;
	int spaces ;

	do 
	{
		printf ("Enter a number bigger then 1 : ");
		scanf ("%d", &n);
		if (n <= 1)
			printf ("Invalid number try again \n");
	}while(n <= 1);

	while (i <= n)
	{
		spaces = n - i;
		while (spaces)
			printf (" "), spaces--;
		while (j <= i)
			(j == 1 || j == i) ? printf ("* ") : printf ("  "), j++;
		i++ ;
		printf ("\n");
		j = 1 ;
	}

	i -= 2 ;

	while (i >= 1)
	{
		spaces = n - i;
		while (spaces)
			printf (" "), spaces-- ;
		while (j <= i)
			(j == 1 || j == i) ? printf ("* ") : printf ("  "), j++;
		i--;
		printf ("\n");
		j = 1;
	}
}
