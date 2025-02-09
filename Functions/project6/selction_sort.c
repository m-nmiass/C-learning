#include <stdio.h>

#define N 10

void selection_sort (int a[], int n);
void split (int a[], int n);

int main ()
{
	int a[N] ;
	int i = 0 ;

	printf ("Enter 10 entegers : ");
	while (i < N)
		scanf ("%d", &a[i]), i++ ;

	selection_sort (a, N);
	i = 0 ;

	printf ("The output is : ");
	while (i < N)
		printf ("%d  ", a[i]),i++ ;

	return 0 ;
}

void selection_sort (int a[], int n)
{
	if (n == 1) return ;
	split (a, n) ;
	selection_sort(a, n - 1);
}

void split (int a[], int n)
{
	int i = 0 ;
	int max = 0 ;
	int temp ;

	while (i < n)
	{
		if (a[i] > a[max])
		{
			max = i ;
		}
		i++ ;
	}
	temp = a[n - 1] ;
	a[n - 1] = a[max] ;
	a[max] = temp ;
}
