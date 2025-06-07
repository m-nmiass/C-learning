#include<stdio.h>

int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	printf((num > 0) ? "Positive" :(num < 0 ? "Negative" : "Zero"));
	return 0;
}
