#include<stdio.h>

void sum_columns(int (*arr)[3], int rows, int *result);

int main()
{
	int arr[4][3];
	int result[3] = {0};

	printf("Enter 12 integers : ");
	for(int *p = *arr; p < *arr + 12; p++)
		scanf("%d", p);

	sum_columns(arr , 4, result);

	for(int i = 0; i < 3; i ++)
		printf("The sum of column %d is %d\n", i, result[i]);
}

void sum_columns(int (*arr)[3], int rows, int *result)
{
	for(int i = 0 ; i < 3; i++)
		for(int j = 0; j < rows; j++) 
			result[i] += *(*(arr + j) + i);
}
