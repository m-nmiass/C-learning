#include<stdio.h>

int main()
{
	int num;
	int ones;
	int tens;
	int hundreds;

	printf("Enter a number : ");
	scanf("%d", &num);

	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = (num / 100) % 10;

	num = (num - (ones) - (tens * 10) - (hundreds * 100)) + (ones * 10) + hundreds + (tens * 100);

	printf("The number is : %d", num);

	return 0;
}
