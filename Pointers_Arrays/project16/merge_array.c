#include<stdio.h>

#define N 100
#define OUT_OF_RANGE (size > 100 || size <= 1)

char crr[N*2];

void read_array(int start, int end);
void print_array(int size);

int main()
{
	int size_arr;
	int size_brr;
	int size;

	printf ("Enter the size of first array : ");
	do{
	scanf ("%d", &size);
	if(OUT_OF_RANGE) printf("Invalide input try again : ");
	}while(OUT_OF_RANGE);
	size_arr = size;
	
	read_array(0, size_arr);

	printf ("Enter the size of second array : ");
	do{
	scanf("%d", &size);
	if(OUT_OF_RANGE) printf("Invalide input try again ; ");
	}while(OUT_OF_RANGE);
	size_brr = size;

	read_array(size_arr, size_arr + size_brr);

	print_array(size_arr + size_brr);
}

void read_array(int start, int end)
{
	printf("Enter the array : ");
	for(char *p = crr + start; p < crr + end; p++)
		scanf(" %c", p);
}

void print_array(int size)
{
	printf("The merged array is : ");
	for(char *p = crr; p < crr + size; p++)
		printf("%c ", *p);
}
