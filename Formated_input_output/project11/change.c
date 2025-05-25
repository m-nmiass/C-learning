#include<stdio.h>

int main()
{
	int dollar;
	int cent;

	printf("Enter The amount : ");
	scanf("%d.%d", &dollar, &cent);

	printf("$20 bills : %d\n", dollar / 20);
	dollar %= 20;

	printf("$10 bills : %d\n", dollar / 10);
        dollar %= 10;

	printf(" $5 bills : %d\n", dollar / 5);
        dollar %= 5;

	printf(" $1 bills : %d\n", dollar);

	printf("25c coins : %d\n", cent / 25);
        cent %= 25;

	printf("10c coins : %d\n", cent / 10);
        cent %= 10;

	printf(" 5c coins : %d\n", cent / 5);
        cent %= 5;

	printf(" 1c coins : %d\n", cent);
        cent;

	return 0;
}
