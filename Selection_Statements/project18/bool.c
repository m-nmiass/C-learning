#include<stdio.h>

int main()
{
	int a;
	int b;

	printf("Enter first number : ");
	scanf("%d", &a);

	printf("Enter second number : ");
	scanf("%d", &b);

	if(a && b)
		printf("Both true");
	else if(a || b)
		printf("One true one false");
	else
		printf("Both false");

	return 0;
}
