#include <stdio.h>

int main ()
{
	int days, start, count ;

	printf ("Enter number of days in month : ");
	scanf ("%d", &days);

	printf ("Enter starting day of the week (1 = Sun, 7 = Sat) : ");
	scanf ("%d", &start);

	count = 1 ;

	while (count < start)
		printf ("    ", count++);
	
	count = 1 ;
	for (; count <= days; count++)
	{
		printf ("%4d", count);
		if ((count + start - 1) % 7 == 0)
			printf ("\n");
	}
}	
