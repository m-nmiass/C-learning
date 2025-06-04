#include<stdio.h>

int main()
{
	int num;
	int decimal;

	printf("Enter the binary : ");
	scanf("%d", &num);

	decimal = (num % 10);
	num /= 10;
	decimal += (num % 10)*2;
	num /= 10;
	decimal += (num % 10) * 4;
	num /= 10;
	decimal += (num * 8);

	printf("Number in decimal is : %d", decimal);
	return 0;
}
