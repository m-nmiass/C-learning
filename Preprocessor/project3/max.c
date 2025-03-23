#include<stdio.h>

#define MAX(i, j) i > j ? i : j

int main()
{
	int i, j;

	printf("Enter the first integer : ");
	scanf("%d", &i);

	printf("Enter the second integer : ");
	scanf("%d", &j);

	printf ("The biggest is %d", MAX(i, j));
}
