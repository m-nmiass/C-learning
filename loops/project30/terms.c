#include<stdio.h>

int main()
{
	int num;
	int count = 0;
	int sum = 0;

	printf("Enter the number : ");
	scanf("%d", &num);

	for(int i = 1; sum < num; sum +=i, i++, count++)
		printf("%d ", i);

	printf("You need %d terms", count);
}
