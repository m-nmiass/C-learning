#include <stdio.h>

#define N 10

int a[N];

void read_integers();
void print_integers();

int main()
{
	read_integers();
	print_integers();
}

void read_integers()
{
	int *p = a ;
	printf ("Enter 10 integers : ");
	while (p < a + N)
		scanf ("%d", p++);
}

void print_integers()
{
	int *p = a + N ;
	printf ("The reverse order is : ");
	while (p > a)
		printf ("%d ", *--p);
}
