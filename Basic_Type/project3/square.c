#include <stdio.h>

int main ()
{
	int i ;

	for (i = 1; 1; i++)
	{
		if (i % 24 == 0)
		{
			printf ("Press Enter to continue : ");
			if (getchar () != '\n')
				break ;
		}
		printf ("%10d %10d\n", i, i*i);
	}
}
