#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	printf(num % 2 == 0 ? "Even" : "Odd");
	return 0;
}
