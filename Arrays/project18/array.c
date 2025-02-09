#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define SIZE 15

int main()
{
	int numbers[SIZE];
	int biggest = INT_MIN;
	int smallest = INT_MAX;
	int odd_count = 0 ;
	int even_count = 0 ;
	int search ;
	int sum_positive = 0 ;
	int sum_negative = 0 ;
	bool exists = false;
	int i = 0 ;
	int j = 1 ;
	int temp ;

	printf ("Enter 15 integers : \n");
	while (i < SIZE)
	{
		scanf ("%d", &numbers[i]);
		if (numbers[i] > biggest)
			biggest = numbers[i] ;
		if (numbers[i] < smallest)
			smallest = numbers[i] ;
		if (numbers[i] > 0)
			sum_positive += numbers[i] ;
		else if (numbers[i] < 0)
			sum_negative += numbers[i] ;
		if (numbers[i] % 2 == 0)
			even_count++ ;
		else
			odd_count++ ;
		i++ ;
	}

	printf ("Enter a number to search : ");
	scanf ("%d", &search);

	i = 0;
	while (i < SIZE)
	{
		if (search == numbers[i])
		{
			exists = true ;
	       		break ;
		}
		i++ ;
	}

	i = 0 ;
	while (i < SIZE - 1)
	{
		while (j < SIZE)
		{
			if (numbers[j] < numbers[i])
			{
				temp = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = temp ;
			}
			j++;
		}
		i++ ;
		j = i + 1 ;
	}

	printf ("Step 1 :Numbers stored in Array.\n");
	printf ("Step 2 :Smallest number: %d, Largest number: %d.\n", smallest, biggest);
	printf ("Step 3 :Even numbers: %d, Odd numbers: %d.\n", even_count, odd_count);
	exists ? printf ("Step 4: Number found!\n") : printf ("Step 4: Number not found!\n");
	printf ("Step 5 :Sum of positive numbers: %d, Sum of negative numbers: %d\n", sum_positive, sum_negative);
	printf ("Step 6 :Sorted array: ");
	i = 0;
	while (i < SIZE)
		printf ("%d ", numbers[i++]);
}
