#include<stdio.h>

int main()
{
	int number;
	int one;
	int ten;
	int hundred;
	int thousand;
	int sum;
	float average;

	printf("Enter 4 digit number : ");
	scanf("%d", &number);

	one = number % 10;
	ten = (number / 10)%10;
	hundred = (number / 100)%10;
	thousand = number / 1000;

	sum = one + ten + hundred + thousand;
	average = (float)sum/4.0f;

	printf("The sum of digits : %d\n", sum);
	printf("The average of digits : %.2f", average);

	return 0;
}
