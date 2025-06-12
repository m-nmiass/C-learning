#include<stdio.h>

int main()
{
	char maj = 0;
	int arr[10];
	int count = 0;

	printf("Enter 10 digits : ");
	
	for(int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(arr[i] == arr[j])
				count++;
		}
		if(count >= 5){
			maj = arr[i] + '0';
			break;
		}
		count = 0;
	}

	if(maj)
		printf("The majority integer is : %c", maj);
	else
		printf("Their is no majority integer");

	return 0;
}
