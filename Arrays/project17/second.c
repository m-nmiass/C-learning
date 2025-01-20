#include <stdio.h>
#include <limits.h>

#define SIZE 5

int main ()
{
	int i = 0 ;
	int j = 0 ;
	int number[SIZE] ;
	int second = INT_MAX;
	int first ;

	printf ("Enter 5 integers :\n");
	while (i < SIZE)
	{
		scanf ("%d", &number[i]);
		if (second > number[i])
			second = number[i];
		i++;
	}

	i = 2 ;
	first = number[0] ;
	while (i < SIZE)
	{
		if (number[i] > first)
		{
			second = first ;
			first = number[i] ;
		}
		else if (number[i] < first && number[i] > second)
			second = number[i] ;
		i++ ;
	}

	printf ("The second largest element is : %d", second);
}
