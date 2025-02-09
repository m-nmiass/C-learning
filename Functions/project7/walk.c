#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_random_walk (char walk[N][N]);
void print_array (char walk[N][N]);

int main ()
{
	char walk[N][N] ;
	int i = 0 ;
	int j = 0 ;

	while (i < N)
	{
		while (j < N)
			walk[i][j++] = '.' ;
		i++ ;
		j = 0 ;
	}
	generate_random_walk (walk) ;
	print_array (walk) ;
}

void print_array (char walk[N][N])
{
	int i = 0 ;
	int j = 0 ;

	while (i < N)
	{
		while (j < N)
			printf ("%c   ", walk[i][j++]);
		printf ("\n");
		j = 0 ;
		i++ ;
	}
}

void generate_random_walk (char walk[N][N])
{
	srand (time(NULL)) ;

	int j = rand () % N ;
	int i = rand () % N ;
	walk[i][j] = 'A' ;
	char ch = 'B' ;
	int k ;

	while (ch <= 'Z')
	{
		k = rand() % 4 ;
		if (k == 0 )
			--i ;
		else if (k == 1 )
			++j ;
		else if (k == 2 )
			++i ;
		else if (k == 3 )
			--j ;

		printf ("for char %c k is %d i is %d j is %d\n",ch, k, i, j);

		if (walk[i][j] == '.' && (i < N && i >= 0) && (j < N && j >= 0))
		{
			walk[i][j] = ch, ch++ ;
		}

		else
		{
			if (k == 0) ++i ;
			else if (k == 1) --j ;
			else if (k == 2) --i ;
			else if (k == 3) ++j ;
			printf ("if worng k is %d i is %d j is %d\n", k, i, j);
		}

		if (((walk[i][j+1] != '.') + (walk[i+1][j] != '.') + (walk[i-1][j] != '.') + (walk[i][j-1] != '.')) == 4)
			return ;
	}
}
