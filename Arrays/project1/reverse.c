#include <stdio.h>
#define N 10

int main ()
{
	int num[N] ;

	printf ("Enter 10 Number : ");

	for (int i = 0; i < N; i++)
		scanf ("%d", &num[i]);

	printf ("In reversed order : ");
	for (int i = N - 1 ; i >= 0 ; i--)
		printf ("%d ", num[i]);
}
