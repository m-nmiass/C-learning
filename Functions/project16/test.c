#include <stdio.h>

int main ()
{
	for (char c = 33; c < 48 ; c++)
		printf ("%d	%c\n", c, c);

	for (char c = 58; c < 65 ; c++)
		printf ("%d	%c\n", c ,c);

	for (char c = 123; c < 127 ; c++)
		printf ("%d	%c\n", c, c);
}	
