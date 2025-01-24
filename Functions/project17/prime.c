#include <stdio.h>

void factor (int num, int prime);
int next_prime(int prime);

int main ()
{
	int num ;

	//Take the num as an input from the user
	do 
	{
		printf ("Enter a positive number bigger than 1 : ");
		scanf ("%d", &num);
		if (num <= 1)
			printf ("Invalid number try again. ");
	}while (num <= 1);

	printf ("Prime factor of %d : ", num);

		factor (num, 2);
}

void factor (int num, int prime)
{
	if (num == 1)
		return  ;
	if (num % prime == 0)
	{
		printf ("%d ", prime);
		num /= prime;
		factor (num, prime);
	}
	else if(num % prime != 0)
		factor (num, next_prime(prime));
}

int next_prime (int prime)
{
	int i = prime ;
	while (i > 1)
	{
		if (prime % i == 0)
		{
			prime++ ;
			i = prime;
		}
		i-- ;
	}
	return prime ;
}
