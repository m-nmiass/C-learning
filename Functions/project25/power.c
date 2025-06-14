#include<stdio.h>

int power(int base, int pow);

int main()
{
	int base;
	int pow;

	printf("Enter the base and the power : ");
	scanf("%d%d", &base, &pow);

	printf("%d^%d is %d", base, pow, power(base, pow));

	return 0;
}

int power(int base, int pow)
{
	if(pow == 1)
		return base;
	if(pow == 0)
		return 1;
	return base * power(base, pow - 1);
}
