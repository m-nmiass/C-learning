#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);

	printf("The min number is : %d", ((a > b) ? (b < c ? b : c) : (a < c ? a : c)));

	return 0;
}
