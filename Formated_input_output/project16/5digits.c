#include<stdio.h>

int main()
{
	int number;
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int digit5;
	int sum;
	float average;
	int left_rotation;
	int right_rotation;
	int reverse;

	printf("Enter 5 digit number : ");
	scanf("%d", &number);

	digit1 = number % 10;
	digit2 = (number / 10) % 10;
	digit3 = (number / 100) % 10;
	digit4 = (number /1000) % 10;
	digit5 = number / 10000;

	sum = digit1 + digit2 + digit3 + digit4 + digit5;
	average = (float)sum/5.0f;
	reverse = digit1 * 10000 + digit2 * 1000 + digit3 * 100 + digit4 * 10 + digit5;
	left_rotation = digit4 * 10000 + digit3 * 1000 + digit2 * 100 + digit1 * 10 + digit5;
	right_rotation = digit1 * 10000 + digit5 * 1000 + digit4 * 100 + digit3 * 10 + digit2;

	printf("Digits : %2d%2d%2d%2d%2d\n", digit5, digit4, digit3, digit2, digit1);
	printf("Sum : %d\n", sum);
	printf("Average : %.2f\n", average);
	printf("Reversed : %d\n", reverse);
	printf("Rotate left : %d\n", left_rotation);
	printf("Rotate right : %d\n", right_rotation);

	return 0;
}
