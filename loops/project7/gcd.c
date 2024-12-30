#include <stdio.h>

int main ()
{
	int num1, num2, max, min, rem ;

	printf ("Enter two integers : ");
	scanf ("%d %d", &num1, &num2);

	(num1 > num2) ? (max = num1, min = num2) : (max = num2, min = num1) ;

	rem = max % min ;

	while (rem)
	{
		max = min ;
		min = rem ;
		rem = max % min ;
	}

	printf ("The Greatest common divisor is : %d", min);
}
