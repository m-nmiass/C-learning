#include<stdio.h>

int main()
{
	int num;
	int decimal;

	printf("Enter the octa number : ");
	scanf("%d", &num);

	decimal = num % 10;
	num /= 10;

	decimal += (num % 10) * 8;
	num /= 10;

	decimal += (num % 10) * 64;
	num /= 10;

	decimal += num * 512;

	printf("The number in decimal is : %d", decimal);
	return 1;
}
