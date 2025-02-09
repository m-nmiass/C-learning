#include <stdio.h>

void print_count (int i)
{
	printf ("T minus %d and counting\n", i) ;
}

int main ()
{
	int i = 10 ;
	while (i >= 0)
		print_count (i), i-- ;
}
