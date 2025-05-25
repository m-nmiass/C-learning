#include<stdio.h>

int main()
{
	int ones;
	int tens;
	int hundreds;

	printf("Enter 3digit number : ");
	scanf("%1d%1d%1d", &hundreds, &tens, &ones);

	printf("The reverse is : %d%d%d", ones, tens, hundreds);

	return 0;
}
