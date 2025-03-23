#include<stdio.h>

#define square(i) i*i

int main()
{
	int i;

	printf("Enter a number : ");
	scanf("%d", &i);

	printf("The square is %d", square(i));
}
