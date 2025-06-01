#include<stdio.h>

int main()
{
	int num;
	int ten;

	printf("Enter a number of 2 digits up: ");
	scanf("%d", &num);

	ten = (num / 10) % 10;
	printf("The tens is : %d", ten);
	
	return 0;
}
