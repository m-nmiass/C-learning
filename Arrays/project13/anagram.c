#include <stdio.h>
#include <stdbool.h>

#define CHAR 26

int main ()
{
	int a[CHAR] = {0} ;
	int b[CHAR] = {0} ;
	int i = 0 ;
	int j = 0 ;
	char ch ;

	printf ("Enter first word : ");

	while ((ch = getchar ()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
			a[ch - 'A']++ ;
		else if (ch >= 'a' && ch <= 'z')
			a[ch - 'a']++ ;
	}

	printf ("Enter second word : ");

	while ((ch = getchar ()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
			b[ch - 'A']++ ;
		else if (ch >= 'a' && ch <= 'z')
			b[ch - 'a']++ ;
	}

	while ((a[i] == b[i]) && (i < CHAR))
		i++ ;

	if (i == CHAR)
		printf ("The words are anagrams.");
	else
		printf ("The words are not anagrams.");
}
		


	


