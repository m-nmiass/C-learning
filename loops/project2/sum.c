#include <stdio.h>

int main ()
{
	int num, sum ;

	printf ("This program sums a serie of integers.");
	printf ("\nEnter integers (0 to terminate) : ");
	scanf ("%d", &num);
	sum = 0 ;

	while (num)
	{
		sum += num ;
		scanf ("%d", &num);
	}

	printf ("The sum is : %d", sum);
}
