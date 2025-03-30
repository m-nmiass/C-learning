#include<stdio.h>
#include"array_utils.h"


int main()
{
	int size;
	int min;
	int max;
	int sum;

	printf("Enter the array size : ");
	scanf("%d", &size);

		
	printf("Enter the array characters : ");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	min = min_element(size);
	max = max_element(size);
	sum = sum_element(size);

	printf("The minimun element is : %d\n", min);
	printf("The maximun element is : %d\n", max);
	printf("The sum of all element is : %d", sum);
}
