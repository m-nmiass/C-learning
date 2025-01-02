#include <stdio.h>

#define MAX 99

int main ()
{
	int a[MAX][MAX] = {0} ;
	int i = 0 ;
	int j = 0 ;
	int number ;
	int dup ;
	int l = 0 ;
	int m = 0 ;

	printf ("Enter the size of magic square (from 1 to 99) : ");
	scanf ("%d", &number) ;

	j = number / 2 ;
	a[i][j] = 1 ;
	m = j ;
	dup = 2	;
	while (dup <= (number * number))
	{

		if (i == 0)
			i = number - 1 ;
		else
			i-- ;
		if (j == number - 1)
			j = 0 ;
		else
			j++ ;

		if (a[i][j] == 0)
		{
			a[i][j] = dup ;
			l = i ;
			m = j ;
			dup++ ;
		}
		else
		{
			a[++l][m] = dup ;
			i = l ;
			j = m ;
			dup++ ;
		}
	}

	i = 0 ;
	j = 0 ;

	while (i < number)
	{
		while (j < number)
			printf ("%3d  ", a[i][j]), j++ ;
		j = 0 ;
		printf ("\n");
		i++;
	}
}
