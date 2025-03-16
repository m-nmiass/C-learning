#include<stdio.h>

int main()
{
	int arr[3][4];
	int sum = 0;

	printf ("Enter 12 Integers 4*3\n");
	for(int *p = *arr; p < *arr + 12; p++)
		scanf("%d", p);

	for(int *p = *arr; p < *arr + 12; p++)
		sum += *p;

	printf ("The sum is : %d", sum);
}
