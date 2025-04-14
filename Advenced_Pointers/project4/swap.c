#include<stdio.h>

void swap(int **a, int **b);

int main()
{
	int a;
	int b;
	int *p1 = &a;
	int **p2 = &p1;
	int *q1 = &b;
	int **q2 = &q1;

	printf("Enter the first number : ");
	scanf("%d", *p2);

	printf("Enter the second number : ");
	scanf("%d", *q2);

	swap(p2, q2);

	printf("first number is %d second number is %d", a, b);
}

void swap(int **a, int **b)
{
	int temp = **a;
	**a = **b;
	**b = temp;
}
