#include <stdio.h>

int main ()
{
	int i = 1 ;
	int j = 1 ;
	int n ;

	do 
	{
		printf ("Enter a number bigger then one : ");
		scanf ("%d", &n);

		if (n <= 1)
			printf ("Invalid Number try again \n");
	}while (n <= 1);

	while (i <= n)
	{
		while (j <= i)
			printf ("%3d", j), j++ ;
	    	printf ("\n");
		i++ ;
		j = 1 ;
	}

	return 0 ;
}	
