#include<stdio.h>
#include"calculation.h"

int main()
{
	int num ;

	printf("Enter a number : ");
	scanf("%d", &num);

	printf("The square is : %d\n", square(num));
	printf("The cube is : %d\n", cube(num));
}
