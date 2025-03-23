#include<stdio.h>

#define add(x, y) x + y

int main()
{
	int i, j;

	printf("Enter the first number : ");
	scanf("%d", &i);

	printf ("Enter the second number : ");
	scanf("%d", &j);

	printf ("The sum is %d", add(i, j));
}
