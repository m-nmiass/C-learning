#include <stdio.h>

int main ()
{
	int num, swap ;

	printf ("Enter a tree-digit number : ");
	scanf ("%d", &num);

	swap = (num % 10) , num = num / 10 ;
	swap = (swap * 10) + (num % 10), num = num / 10 ;
	swap = (swap * 10) + num ;

	printf ("The reverse is : %d", swap);
}
