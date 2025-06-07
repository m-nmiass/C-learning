#include<stdio.h>

int main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	printf("The absulute value is : %d", num > 0 ? num : -num);

	return 0;
}
