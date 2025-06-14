#include<stdio.h>

int digit(int num);

int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	printf("The number %d has %d digit(s)", num, digit(num));

	return 0;
}

int digit(int num)
{
	if(num == 0)
		return 0;
	return 1 + digit(num /= 10);
}
