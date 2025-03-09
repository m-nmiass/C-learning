#include<stdio.h>
#include<stdbool.h>

#define N 100
#define OUT_OF_RANGE (size > N || size <= 1)

char arr[N];

void user_input(int size);
void swap(char *a, char *b);
void swap_array(char *p, int size);
void print_array(int size);

int main()
{
	int size ;

	printf("Enter the array size up to %d : ", N);
	do {
	scanf("%d", &size);
	if(OUT_OF_RANGE) printf("Invalide input try again : ");
	}while(OUT_OF_RANGE);

	user_input(size);

	for(char *p = arr, *q = arr + 1; p < arr + size; q++)
	{
		if(*p == *q) {
			swap_array(q, size);
			size--;
		}

		if(q >= arr + size) {
			p++;
			q = p;
		}
	}

	print_array(size + 1);
}

void user_input(int size)
{
	printf ("Enter the array elements : ");
	for(char *p = arr; p < arr + size; p++)
		scanf("%c", p);
}

void swap_array(char *p, int size)
{
	for(char *q = p + 1; q < arr + size; q++, p++)
		swap(p, q);
}

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void print_array(int size)
{
	printf ("Modified array : ");
	for(char *p = arr; p < arr + size; p++)
		printf ("%c", *p);
}
