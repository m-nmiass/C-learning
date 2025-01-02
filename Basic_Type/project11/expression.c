#include <stdio.h>

int main ()
{
	float sum, i ;
	char c = ' ';

	printf ("Enter an expression : ");
	scanf ("%f", &sum) ;
	while (1)
	{
		scanf ("%c", &c);

		if (c == '+' || c == '-' || c == '*' || c == '/')
		{
			scanf ("%f", &i);
			if (c == '+')
				sum += i ;
			else if (c == '-')
				sum -= i ;
			else if (c == '*')
				sum *= i ;
			else if (c == '/')
				sum /= i ;
		}
		else
			break ;
	}

	printf ("The result is : %g", sum);
}

