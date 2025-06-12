#include<stdio.h>

int main()
{
	char c;
	int arr[10] = {0};

	printf("Enter the numbers : ");

	while((c = getchar()) != '\n'){
		if(c >= '0' && c <= '9')
			arr[c - '0']++;
	}

	for(int i = 0; i < 10; i++)
		printf("%d : %d\n", i, arr[i]);
}
