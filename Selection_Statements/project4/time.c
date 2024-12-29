#include <stdio.h>

int main()
{
	int hour, min ;

	printf ("Enter a 24-hour time : ");
	scanf ("%d : %d", &hour, &min);

	printf ("Equivalent 12-hour time : ");

	if (hour > 12)
		printf ("%d : %d PM", hour - 12, min);
	else if (hour < 12)
		printf ("%d : %d AM", hour, min);
	else if (hour == 12)
		printf ("%d : %d PM", hour, min);
}
