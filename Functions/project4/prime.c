#include <stdio.h>
#include <stdbool.h>

bool prime_check (int num)
{
	int i = 2 ;
	while (i < num)
	{
		if (num % i == 0)
			return 0 ;
		i++ ;
	}
	return 1 ;
}

int main ()
{
	int check ;

	printf ("Enter a number : ");
	scanf ("%d", &check) ;

	if (prime_check(check))
		printf ("Prime.");
	else 
		printf ("Not prime");
}

