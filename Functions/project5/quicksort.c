#include <stdio.h>

#define NUMBERS 10
void Quicksort (int a[], int low, int high);
int split (int a[], int low, int high);

int main ()
{
	int a[NUMBERS] ;
	int i = 0 ;

	printf ("Enter 10 numbers :");
	while (i < NUMBERS)
		scanf ("%d", &a[i]), i++ ;

	Quicksort (a, 0, 9);

	i = 0 ;
	while (i < NUMBERS)
		printf ("%d  ", a[i]), i++ ;
}

void Quicksort (int a[], int low, int high)
{
	int mid ;
	if (low >= high) return ;
	mid = split ( a, low, high);
	Quicksort (a, low, mid - 1);
        Quicksort (a, mid + 1, high);
}

int split (int a[], int low, int high)
{
	int temp = a[low] ;

	while (1)
	{
		while (high > low && temp <= a[high])
			high-- ;
		if (high <= low) break ;
		a[low] = a[high], low++ ;

		while (high > low && temp >= a[low])
			low++ ;
		if (high <= low) break ;
		a[high] = a[low], high-- ;
	}
	a[high] = temp ;
	return high ;
}

