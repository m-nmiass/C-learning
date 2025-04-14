#include<stdio.h>

#define ROWS 5
#define COLUMNS 4

void increament(int (*p)[COLUMNS]);
void print_arr(int (*p)[COLUMNS]);

int main()
{
	int arr[ROWS][COLUMNS] = {0};
	increament(arr);
	print_arr(arr);
}

void increament(int (*p)[COLUMNS])
{
	for(int i = 0; i < COLUMNS * ROWS; i++)
		(*p)[i] += 10;
}

void print_arr(int (*p)[COLUMNS])
{
	for(int i = 0; i < COLUMNS * ROWS; i++){
		if(i % COLUMNS == 0 && i)
			printf("\n");
		printf("%d ", (*p)[i]);
	}
}
