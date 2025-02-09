#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 6

int main ()
{
	int matrix[SIZE][SIZE];
	int check_matrix[SIZE][SIZE] = {false};
	int i = 0 ;
	int j = 0 ;
	int k = 0 ;
	int sum = 0 ;
	int count = 0 ;
	srand(time(NULL));

	while (i < SIZE)
	{
		while (j < SIZE)
		{
			matrix[i][j] = rand() % 10 ;
			printf ("%d   ", matrix[i][j]);
			j++;
		}
		j = 0 ;
		i++ ;
		printf ("\n");
	}

	printf ("\n\n\n");

	i = 0 ;
	j = 0 ;
	while (i < SIZE)
	{
		while (j + 4 < SIZE)
		{
			while ((matrix[i][j+count] == matrix[i][j+count+1] - 1) && j + count < SIZE)
				count++ ;
			if (count  >= 3)
			{
				while (count >= 0)
				{
					if (!check_matrix[i][j+count])
						sum += matrix[i][j+count] ;
					check_matrix[i][j+count] = true ;
					count-- ;
				}
			}
			count = 0 ;
			j++ ;
		}
		i++ ;
		j = 0 ;
	}

	i = 0 ;
	j = 0 ;
	while (j < SIZE)
	{
		while (i + 4 < SIZE)
		{
			while ((matrix[i+count][j] == matrix[i+count+1][j] - 1) && i + count < SIZE)
				count++ ;
			if (count  >= 3)
			{
				while (count >= 0)
				{
					if (!check_matrix[i+count][j])
						sum += matrix[i+count][j] ;
					check_matrix[i+count][j] = true ;
					count-- ;
				}
			}
			count = 0 ;
			i++ ;
		}
			j++ ;
			i = 0 ;
	}

	i = 0;
	j = 0;
	while (i < SIZE)
	{
		while (j < SIZE)
		{
			printf ("%d", matrix[i][j]);
			if (check_matrix[i][j])
				printf ("*  ");
			else
				printf ("   ");
			j++ ;
		}
		printf ("\n");
		i++ ;
		j = 0 ;
	}
	printf ("The complicity score is %d", sum);

}
