#include <stdio.h>

#define num 5
int main ()
{
	int a[num][num] ;
	int i = 0 ;
	int j = 0 ;
	int sum = 0;

	while (i < num)
	{
		printf ("Enter row %d : ", i+1);
		while (j < num)
		{
			scanf ("%d", &a[i][j]) ;
			j++ ;
		}
		j = 0;
		i++ ;
	}

	i = 0 ;
	j = 0 ;
	printf ("Row totals : ");
	
	while (i < num)
	{
		while (j < num)
			sum += a[i][j], j++ ;
		printf ("%d  ", sum);
		sum = 0, i++, j = 0 ;
	}

	i = 0 ;
	j = 0 ;
	sum = 0 ;
	printf ("\nColumn totals : ");

	while (j < num)
	{
		while (i < num)
			sum += a[i][j], i++ ;
		printf ("%d   ", sum);
		i = 0, j++, sum = 0 ;
	}
}
