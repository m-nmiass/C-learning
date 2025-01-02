#include <stdio.h>

int main ()
{
	int check[10] = {0} ;
	char ch ;
	int i = 0 ;

	printf ("Enter a number : ");
	while ((ch = getchar ()) != '\n')
		check[ch - 48]++ ;

	printf ("Repeated digit(s) : ");

	while (i < 10)
		check[i] > 1 ? printf ("%d " ,i), i++ : i++ ;
}	
