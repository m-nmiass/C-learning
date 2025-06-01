#include<stdio.h>

int main()
{
	int num;
	int tens;
	int ones;

	printf("Enter the number : ");
	scanf("%d", &num);

	tens = (num / 10) % 10 ;
	ones = num % 10;

	num = (num - (tens * 10) - (ones)) + (ones * 10) + tens;

	printf("The number : %d", num);

	return 0;
}
