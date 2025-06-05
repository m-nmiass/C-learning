#include<stdio.h>

int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if(num == 0){
		printf("Zero");
		return 0;
	}

	if(num % 2 == 0)
		printf("Even and ");
	else
		printf("Odd and ");

	if(num > 0)
		printf("Positive.");
	else
		printf("Negative.");

	return 0;
}
