#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define walk 10
int main ()
{
	char a[walk][walk] ;
	int i, j ;
	char ch ;
	int k, l, m ;

	i = 0 ;
	j = 0 ;
	while (i < walk)
	{
		while (j < walk)
			a[i][j] = '.', j++ ;
		j = 0 ;
		i++ ;
	}
	
	srand (time(NULL));
	j = rand () % walk ;
	i = rand () % walk ;
	a[i][j] = 'A' ;
	ch = 'B' ;

	while (ch <= 'Z')
	{
		l = i ;
		m = j ;
		k = rand () % 4 ;
		if ( k == 0 )
			m++ ;
		else if ( k == 1 )
			l++ ;
		else if ( k == 2 )
			m-- ;
		else if ( k == 3 )
			l-- ;
		if (a[l][m] == '.' && l < walk && m < walk)
		{
			a[l][m] = ch ;
			i = l, j = m ;
			ch++ ;
		}
		else 
		{
			if ((a[i][j+1] != '.' && j < 9) && (a[i+1][j] != '.' && i < 9) && (a[i-1][j] != '.' && i > 0) && (a[i][j-1] != '.' && j > 0))
				break ;
			else if ( k == 0 )
				m-- ;
			else if ( k == 1 )
				l-- ;
			else if ( k == 2 )
				m++ ;
			else if ( k == 3 )
				l++ ;
		}
	}



	i = 0 ;
	j = 0 ;
	while (i < walk)
	{
		while (j < walk)
			printf ("%c  ", a[i][j]), j++ ;
		i++ ;
		j = 0 ;
		printf ("\n");
	}
}

