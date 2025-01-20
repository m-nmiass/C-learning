#include <stdio.h>

int main ()
{
	int num ;
	int sum = 0 ;
	char c ;

	printf ("Enter a number : ");
	while ((c = getchar()) != '\n')
		num = c - 48, sum += num ;

	printf ("The sum is : %d", sum);
}	
