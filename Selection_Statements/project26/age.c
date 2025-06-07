#include<stdio.h>

int main()
{
	int num;

	printf("Enter the age : ");
	scanf("%d", &num);

	printf((num >= 20) ? "Adult" : (num >= 13 ? "Teen" : "Child"));

	return 0;
}
