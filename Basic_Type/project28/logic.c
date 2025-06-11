#include<stdio.h>

int main()
{
	int a;
	int b;

	printf("Enter two numbers : ");

	scanf("%d%d", &a, &b);

	if(a * b != 0)
		printf("Both true");
	else if(a + b != 0)
		printf("One is true");
	else if((a == 0) + (b == 0) == 2)
		printf("None");

	return 0;
}
