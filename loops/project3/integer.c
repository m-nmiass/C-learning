#include <stdio.h>

int main ()
{
	int num, digit ;

	printf ("Enter a nonnegative integer : ");
	scanf ("%d", &num);
	
	digit = 0 ;

	do 
	{
		digit++;
		num /= 10 ;
	}while (num);

	printf ("The number has %d digits(s)", digit);
}
