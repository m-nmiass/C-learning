#include<stdio.h>

void print(int num);

int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);
	
	print(num);

	return 0;
}

void print(int num)
{
	if(num < 0)
		return;
	print(num - 1);
	printf("%d ", num);
}
