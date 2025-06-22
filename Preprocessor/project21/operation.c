#include<stdio.h>

#define PRINT_EXPR(x) printf(#x " = %d\n", x)

int main()
{
	int n;
	int m;

	printf("Enter the first variable : ");
	scanf("%d", &n);

	printf("Enter the second variable : ");
	scanf("%d", &m);

	PRINT_EXPR(n + m);
	PRINT_EXPR(n - m);
	PRINT_EXPR(n * m);
	PRINT_EXPR(n / m);
	PRINT_EXPR(n % m);

	return 0;
}
