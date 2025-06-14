#include<stdio.h>

void print(int num);

int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	printf("numbers from %d to 1 are :", num);
	print(num);
}

void print(int num)
{
	if(num == 0)
		return;
	printf("%d ", num);
	print(num - 1);
}
