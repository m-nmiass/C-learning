#include <stdio.h>

int main ()
{
	long long int num, sum ;

	sum = 0 ;
	printf ("This program sums a serie of integers.");
	printf ("\nEnter integers (0 to terminate) : ");
	
	do 
	{
		scanf ("%lld", &num);
		sum += num ;
	}while (num);

	printf ("The sum is : %lld", sum);
}
