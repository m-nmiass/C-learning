#include <stdio.h>
#include <stdbool.h>

#define  N 100

int arr[N];

void read_input(int size);
bool target_sum(int *first_indice, int *second_indice, int target);
void result_printing(int *first_indice, int *second_indice, int target);

int main()
{
	int size ;
	int *first_indice = arr;
	int *second_indice = arr + 1;
	int target ;

	printf ("Enter the size of the array up to %d : ", N);
	do {
	scanf ("%d", &size);
	if(size <= 1 || size > N) printf ("Invalide Input try again: ");
	}while(size <= 1 || size > N);

	read_input(size);

	printf ("Enter the target sum : ");
	scanf ("%d", &target);
	
	for(; first_indice < arr + size; second_indice++)
	{
		if(target_sum(first_indice, second_indice, target))
			result_printing(first_indice, second_indice, target);

		if(second_indice >= arr + size) {
		first_indice++;
		second_indice = first_indice;
		}
	}
}

void read_input(int size)
{
	printf ("Enter the array elements : ");
	for(int *p = arr; p < arr + size; p++)
		scanf ("%d", p);
}

bool target_sum(int *first_indice, int *second_indice, int target)
{
	return (*first_indice + *second_indice) == target;
}

void result_printing(int *first_indice, int *second_indice, int target)
{
	printf ("Pair found at indices (%d, %d): %d + %d = %d\n", first_indice - arr, second_indice - arr, *first_indice,
			*second_indice, target);
}
