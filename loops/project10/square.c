#include <stdio.h>

int main ()
{
	int num ;

	printf ("Enter the max even square : ");
	scanf ("%d", &num);

	for (int odd = 5, square = 4; square <= num ; square += odd, odd +=2, square += odd, odd += 2 )
		printf ("%d\n", square);
}
