#include<stdio.h>

void double_values(int (*arr)[4], int rows);

int main()
{
	int arr[3][4];
	printf ("Enter 12 integers : ");
	for(int *p = *arr; p < *arr + 12; p++)
		scanf("%d", p);

	double_values(&arr[0], 4);

	for(int *p = *arr; p < *arr + 12; p++)
		printf ("%d ", *p);
}

void double_values(int (*arr)[4], int rows)
{
	for(int i = 0; i < 12; i++)
		(*arr)[i] *= 2;
}
