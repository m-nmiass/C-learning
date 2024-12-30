#include <stdio.h>

int main ()
{
	int num ;

	printf ("Enter an integer : ");
	scanf ("%d", &num);

	printf ("The swaped digit is : ");

	for (; num ;num /= 10)
		printf ("%d", num%10);
}
