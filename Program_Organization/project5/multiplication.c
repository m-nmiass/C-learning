#include <stdio.h>

void multiplication_generate (int number, int max_range);

int main()
{
	int number ;
	int max_range ;

	printf ("Enter a number for the multiplication table : ");
	scanf ("%d", &number);

	printf ("Enter the max range of the multiplication table : ");
	scanf("%d", &max_range);

	multiplication_generate(number, max_range);
}

void multiplication_generate (int number, int max_range)
{
	for (int i = 0; i <= max_range; i++)
		printf ("%-5d*%5d = %5d\n", i, number, i*number);
}
