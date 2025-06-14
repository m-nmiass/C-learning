#include<stdio.h>

int sum(int n);

int main()
{
	int n;

	printf("Enter the number : ");
	scanf("%d", &n);

	printf("The sum of all number from 1 to %d is : %d", n, sum(n));

	return 0;
}

int sum(int n)
{
	if(n <= 1)
		return n;
	return n + sum(n - 1);
}
