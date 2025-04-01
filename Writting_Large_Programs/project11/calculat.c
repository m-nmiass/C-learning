#include"calcult.h"
#include<stdio.h>

int main()
{
	int i, j;
	printf("Enter two numbers : ");
	scanf("%d %d", &i, &j);

	printf("Sum : %d\n", add(i, j));
	printf("Difference : %d\n", sub(i, j));
	printf("Product : %d\n", dev(i, j));
	printf("Quotient : %d\n", mult(i, j));
}
