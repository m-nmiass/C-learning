#include <stdio.h>
#include <limits.h>

#define SIZE 10

int minimum (int a[]);
int maximum (int a[]);
float average (int a[]);
void read_array(int a[]);

int main ()
{
	int a[SIZE] ;
	int i = 0 ;
	read_array(a);
	int min = minimum(a);
	int max = maximum(a);
	float aver = average(a);

	printf ("Minimum : %d\n", min);
	printf ("Maximum : %d\n", max);
	printf ("average : %g\n", aver);
}

void read_array(int a[])
{
	printf ("Enter 10 integers : ");
	for (int i = 0; i < SIZE; i++)
		scanf ("%d", &a[i]);
}

int minimum (int a[])
{
	int min = INT_MAX ;
	for (int i = 0; i < SIZE; i++)
		if (min > a[i])
			min = a[i];
	return min ;
}

int maximum (int a[])
{
	int max = INT_MIN ;
	for (int i = 0; i < SIZE; i++)
		if (max < a[i])
			max = a[i] ;
	return max ;
}

float average (int a[])
{
	float aver = 0 ;
	for (int i = 0; i < SIZE; i++)
		aver += a[i] ;
	aver /= SIZE ;
	return aver ;
}
