#include"array_utils.h"
int arr[SIZE];

int max_element(int len)
{
	int max = arr[0];
	for(int i = 0; i < len; i++)
		if(max < arr[i])
			max = arr[i];
	return max;
}

int min_element(int len)
{
	int min = arr[0];
	for(int i = 0; i < len; i++)
		if(min > arr[i])
			min = arr[i];
	return min;
}

int sum_element(int len)
{
	int sum = 0;
	for(int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}
