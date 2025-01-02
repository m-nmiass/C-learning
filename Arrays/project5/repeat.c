#include <stdio.h>

int main ()
{
	int check [10] = {0} ;
	char ch ;
	int i = 0 ;

	printf ("Enter a number : ");

	while (( ch = getchar ()) != '\n')
		check [ch - 48]++ ;

	printf ("Digit :        ");
	while (i < 10)
		printf ("%d   ", i), i++;

	i = 0 ;
	printf ("\nOccurrences   :");
	while (i < 10)
		printf ("%d   ",check[i]), i++;

}
