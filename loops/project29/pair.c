#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	for(int i = 0, j = num; j >= 0; j--, i++)
		printf("(%d, %d) ", i, j);

	return 0;
}
