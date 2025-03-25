#include<stdio.h>

#define FACTORIAL(n, name) \
name = 1;		   \
for(int i = 1 ; i <= n; i++) \
name = name * i; \

int main()
{
	int factorial;
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	FACTORIAL(n, factorial);

	printf("The factorial is : %d", factorial);
}
