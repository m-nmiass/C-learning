#include<stdio.h>

int zeros(int num);

int main()
{
	int num;

	printf("Enter number : ");
	scanf("%d", &num);

	printf("The number %d has %d zero(s)", num, zeros(num));

	return 0;
}

int zeros(int num)
{
	if(num == 0)
		return 0;
	if(num % 10 == 0)
		return 1 + zeros(num / 10);
	else
		return zeros(num / 10);
}

