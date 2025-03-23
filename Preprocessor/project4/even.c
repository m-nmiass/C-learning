#include<stdio.h>

#define IS_EVEN(i)  i % 2 == 0

int main()
{
	int i;
	
	printf("Enter a number : ");
	scanf ("%d", &i);

	if(IS_EVEN(i))
		printf("%d is even", i);
	else
		printf("%d is odd", i);
}
