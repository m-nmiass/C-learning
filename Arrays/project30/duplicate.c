#include<stdio.h>

int main()
{
	int arr[10];
	int new[10] = {0};
	int digit;
	int count = 0;
	
	printf("Enter digits : ");
	for(int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for(int i = 0, j = 0; i < 10; i++){
		for(j = 0; j < count; j++){
			if(new[j] == arr[i])
				break;
		}
		if(j == count){
			new[count] = arr[i];
			count++;
		}
	}

	for(int i = 0; i < count; i++)
		printf("%d ", new[i]);
}
