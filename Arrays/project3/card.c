#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define DECK 4
#define RANK 13

int main ()
{
	bool check [DECK][RANK] = {0} ;
	char deck [DECK] = {'c', 'd', 'h', 's'} ;
	char suit [RANK] = {'2', '3', '4', '5', '6', '7', '8', '9', '0', 'j', 'q', 'k', 'a'} ;
	srand (time(NULL)) ;
	int num ;
	int deck_num, rank_num ;


	printf ("Enter number of cards : ");
	scanf ("%d", &num);

	printf ("Your hand : ");

	while (num)
	{
		deck_num = rand () % DECK ;
		rank_num = rand () % RANK ;

		if (!check[deck_num][rank_num])
		{
			check[deck_num][rank_num]++ ;
		        suit [rank_num] != '0' ? printf ("%c", suit[rank_num]) : printf ("10");
			printf ("%c ", deck[deck_num]);
			num-- ;
		}
	}
}
