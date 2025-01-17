#include <stdio.h>

int main ()
{
	int n = 1 ;
	int count = 1 ;

	do
	{
		if (n <= 1)
		{
			printf ("Enter a positive integer bigger then 1 : ");
			scanf ("%d", &n);
			count = 1 ;
		}

		else if (count % 2 == 0)
			printf ("%d  ", count);
		count++ ;
		
		if (count > n && n > 1)
			break ;
	}while (1);

	return 0 ;
}
