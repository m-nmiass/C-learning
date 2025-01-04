#include <stdio.h>

#define N 99

void create_magic_square(int n, int magic_square[n][n]) ;
void print_array(int n, int magic_square[n][n]);

int main ()
{
	int magic_square[N][N] = {0} ;
	int n ;
	printf ("Enter an odd number between 1 and 99 : ");
	scanf ("%d", &n);

	create_magic_square(n, magic_square);
	print_array(n, magic_square);
}

void create_magic_square(int n, int magic_square[n][n])
{
	int i ;
	int j ;
	i = 0 ;
	j = n/2 ;
	int l = i ;
	int k = j ;
	int m = 2 ;
	magic_square[i][j] = 1 ;

	while (m <= n*n)
	{
		if (i == 0)
			i = n - 1 ;
		else
			i-- ;

		if (j == n-1)
			j = 0 ;
		else
			j++ ;
		
		if (magic_square[i][j] == 0)
			magic_square[i][j] = m, m++ ;
		else 
		{
			magic_square[++l][k] = m, m++ ;
			i = l, j = k ;
		}
		l = i ;
		k = j ;
	}
}

void print_array (int n, int magic_square[n][n])
{
	int i = 0 ;
	int j = 0 ;
	while (i < n)
	{
		while (j < n)
			printf ("%7d", magic_square[i][j]), j++ ;	
		
		printf ("\n");
		i++ ;
		j = 0 ;
	}
}
	
