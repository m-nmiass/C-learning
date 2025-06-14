#include<stdio.h>

int digits(int num);

int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	printf("The didgits of the number are : \n");
	digits(num);

	return 0;
}

int digits(int num)
{
	if(num == 0)
		return 0;
	digits(num / 10);
	printf("%d\n", num % 10);
}
