#include<stdio.h>

int arr[] = {1, 2, 3, 4, 5};

void print_array()
{
	for(int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void modify_array(int j)
{
	for(int i = 0; i < 5; i++)
		arr[i] *= j;
}
