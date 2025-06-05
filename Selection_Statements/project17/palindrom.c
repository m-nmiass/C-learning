#include<stdio.h>

int main()
{
	int d1;
	int d2;
	int d3;

	printf("Enter a 3 digit number : ");
	scanf("%1d%1d%1d", &d1, &d2, &d3);

	if (d1 == d3)
		printf("Is palindrom.");
	else
		printf("Is not palindrom.");

	return 0;
}
