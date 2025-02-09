#include <stdio.h>

#define SIZE 5
int main ()
{
	int i = 0 ;
	int j = 1 ;
	int number[SIZE] ;

	printf ("Enter 5 inetegers :\n");
	while (i < SIZE)	
		scanf ("%d", &number[i++]);

	i = 0 ;
	while (j < SIZE)
	{
		if (number[i]>number[j])
		{
			printf ("The array is not sorted in ascending order");
			return 0 ;
		}
		i++, j++ ;
	}
	printf ("The array is sorted in ascending order");
}
