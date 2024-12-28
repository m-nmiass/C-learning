#include <stdio.h>

int main ()
{
	int num1, num2, num3 ;

	printf ("Enter a tree-digit number : ");
	scanf ("%1d%1d%1d", &num1, &num2, &num3);

	printf ("The reverse is : %d%d%d", num3, num2, num1);
}
