#include<stdio.h>

int main()
{
	int num;
	int *p1 = &num;
	int **p2 = &p1;

	printf("Enter a number : ");
	scanf("%d", *p2);

	printf("The number is %d", **p2);
}
