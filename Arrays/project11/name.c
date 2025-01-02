#include <stdio.h>

#define CHAR 20

int main ()
{
	char a[CHAR] ;
	int i = 0 ;
	int j = 0 ;
	char ch ;

	printf ("Enter a first and last name : ");
	while ((ch = getchar ()) == ' ') ;
	while ((a[i] = getchar ()) != ' ');
	while ((a[i] = getchar ()) == ' ');

	++i ;
	while ((a[i] = getchar ()) != '\n')
		i++ ;

	printf ("You entered the name : %c, ", ch);
	
	while (j < i)
		printf ("%c", a[j]), j++ ;
}

