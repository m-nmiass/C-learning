#include<stdio.h>

int main()
{
	int a;
	int b;

	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);

	printf("The max number is : %d", (a > b ? a : b));

	return 0;
}
