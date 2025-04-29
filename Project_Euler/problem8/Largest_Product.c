#include<stdio.h>

void read_array(int arr[]);

int main()
{
	int arr[1000];
	unsigned long long int max = 1;
	unsigned long long int current = 1;
	printf("Enter the array : \n");
	read_array(arr);
	for(int i = 0; i < 1000 - 4; i++){

		for(int k = 0;k < 4; k++){
			if(arr[i + k] == 0)
				break;
			current *= arr[i + k]; 
		}

		if(max < current)
			max = current;
		current = 1;
	}

	printf("The largest product is %llu", max);
}

void read_array(int arr[])
{
	for(int i = 0; i < 1000; i++)
		scanf("%1d", &arr[i]);
}
