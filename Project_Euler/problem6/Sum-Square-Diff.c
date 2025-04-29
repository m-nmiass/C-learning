#include<stdio.h>

unsigned int square(int num);
unsigned int sum_of_squares(int num);
unsigned int squares_of_sum(int num);

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	unsigned int squares = squares_of_sum(num);
	unsigned int sums = sum_of_squares(num);
	printf("The difference is %u", squares-sums);
}


unsigned int square(int num)
{
	return num*num;
}

unsigned int sum_of_squares(int num)
{
	unsigned int sum = 0;
	for(int i = 1; i <= num; i++)
		sum += square(i);
	return sum;
}

unsigned int squares_of_sum(int num)
{
	unsigned int squares = 0;
	for(int i = 1; i <= num; i++)
		squares += i;
	squares = square(squares);
	return squares;
}
