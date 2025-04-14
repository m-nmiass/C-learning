#include<stdio.h>

#define ROWS 4
#define COLUMNS 5

void copy_to(int (*src)[COLUMNS], int (*dest)[COLUMNS]);
void print_arr(int (*arr)[COLUMNS]);

int main()
{
	int arr[ROWS][COLUMNS] = {0};
	int arr2[ROWS][COLUMNS];

	copy_to(arr, arr2);
	print_arr(arr2);
}

void copy_to(int (*src)[COLUMNS], int (*dest)[COLUMNS])
{
	for(int i = 0; i < COLUMNS * ROWS; i++)
		(*dest)[i] = (*src)[i];
}

void print_arr(int(*arr)[COLUMNS])
{
	for(int i = 0; i < COLUMNS * ROWS; i++){
		if(i % COLUMNS == 0 && i)
			printf("\n");
		printf("%d ", (*arr)[i]);
	}
}
