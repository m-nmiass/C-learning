#include"statistics.h"
#include<stdio.h>

int main()
{
	int nb;
	printf("Enter the number amount : ");
	scanf("%d", &nb);
	getchar();

	printf("Enter the numbers : ");
	read_line(nb);
	printf("The sum is %d\n", sum);
	printf("The biggest number is %d\n", max);
	printf("The smallest number is %d\n", min);
}
