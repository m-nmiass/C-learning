#include <stdio.h>

int main ()
{
	float sum, i ;
	char c = 1;
	sum = 0 ;

	printf ("Enter an expression : ");

	getchar () ;	
	while (c)
	{
		scanf ("%f%c", &i, &c);
		if (c == '+')
			sum += i ;
		else if (c == '-')
			sum -= i ;
		else if (c == '*')
			sum *= i ;
		else if (c == '/')
			sum /= i ;
		else
			break ;
	}

	printf ("The result is : %g", sum);
}

