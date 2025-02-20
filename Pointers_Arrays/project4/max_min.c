#include <stdio.h>

#define N 10

int a[N] ;

void user_input();
void max_min();
void array_print();

int main()
{
	max_min();
}

void user_input()
{
	int *p = a ;
	printf ("Enter 10 integers : ");
	while (p < (a + N))
		scanf ("%d", p++);
}

void max_min()
{
	user_input();

	int max = a[0];
	int min = a[0];
	int *p = a;

	while (++p < (a + N))
	{
		if (max < *p)
			max = *p;
		if (min > *p)
			min = *p;
	}

	printf ("Largest : %d\n", max);
	printf ("Smallest : %d\n", min);
}
