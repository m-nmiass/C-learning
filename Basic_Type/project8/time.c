#include <stdio.h>

int main ()
{
	int h, min ;
	char a ;

	printf ("Enter a 12-hour time : ");
	scanf ("%d : %d", &h, &min);

	while ((a = getchar ()) == ' ');
	
	if (a == 'p' || a == 'P')
	{
		if (h != 12 && h != 0)
			h += 12 ;
	}

	printf ("Equivalent 24-Hour time : %.2d : %.2d", h, min);
}

