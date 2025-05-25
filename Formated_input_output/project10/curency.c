#include<stdio.h>

int main()
{
	float money;
	int cent;
	int dollar;

	printf("Enter the amont of money : ");
	scanf("%f", &money);

	dollar = money;
	cent = (money - dollar) * 100 + 0.5;

	printf("Dollars : %d", dollar);
	printf("\nCents : %d", cent);

	return 0;
}
