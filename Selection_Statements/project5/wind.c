#include <stdio.h>

int main ()
{
	int speed ;

	printf ("Enter the wind speed in Knots : ");
	scanf ("%d", &speed);
	
	printf ("The wind force is : ");

	if (speed < 1)
		printf ("Calm");
	else if (speed <= 3)
		printf ("Light air");
	else if (speed <= 27)
	       printf ("Breeze");
	else if (speed <= 47)
		printf ("Gale");
	else if (speed <= 63)
		printf ("Storm");
	else
		printf ("Hurricane");
}	
