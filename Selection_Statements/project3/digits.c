#include <stdio.h>

int main ()
{
	int num ;

	printf ("Enter a number between 0 and 9999 : ");
	scanf ("%d", &num);

	printf ("Your number %d ", num);

	if (num < 10 && num >= 0)
		printf ("have 1 digit");
	else if (num < 100)
		printf ("have 2 digits");
	else if (num < 1000)
		printf ("have 3 digits");
	else if (num < 10000)
		printf ("have 4 digits");
	else
		printf ("is invalide");
}
