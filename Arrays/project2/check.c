#include <stdio.h>
#include <stdbool.h>


int main ()
{
	bool check [25] = {0} ;
	char ch ;

	printf ("Enter a number ");

	while ((ch = getchar ()) != '\n')
	{
		if (!check[ch - 48])
			check[ch - 48]++ ;
		else 
			break;
	}

	ch == '\n' ? printf ("Non Repeated digit.") : printf ("Repeated digt(s)");
}
