#include<stdio.h>

void double_values(int (*arr)[4], int rows);

int main()
{
	int arr[3][4];
	printf ("Enter 12 integers : ");
	for(int *p = *arr; p < *arr + 12; p++)
		scanf("%d", p);

	double_values(&arr[0], 3);

	for(int *p = *arr; p < *arr + 12; p++) {
		printf("%d ", *p);
		if((p - *arr)%4 == 0)
			printf("\n");
	}
}

void double_values(int (*arr)[4], int rows)
{
	for(int *p = (arr)[0]; *arr < (arr)[0] + 12; p++)
		*p *= 2;
}
