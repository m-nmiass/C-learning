#include<stdio.h>

int factorial(int num);

int main()
{
	int num;

	printf("Entern a number : ");
	scanf("%d", &num);

	num = factorial(num);

	printf("The factorial is : %d", num);

	return 0;
}

int factorial(int num)
{
	if(num <= 1)
		return 1;
	return num * factorial(num - 1);
}
