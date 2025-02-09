#include <stdio.h>

int main ()
{
	char c;
       	int i , j;

	printf ("Enter phone number : ");
	
	while (( c = getchar ()) != '\n')
	{
		if ( c >= 'A' && c <= 'Y' && c != 'Q')
		{
			j = (c < 'Q') ? 6 : 5 ;
			i = ((c - 'A')+j)/3 ;
			printf ("%d", i);
		}
		else
			printf ("%c", c);
	}
}
