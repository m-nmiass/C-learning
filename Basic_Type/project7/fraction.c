#include <stdio.h>

int main ()
{
	int num1, num2, denom1, denom2, num, denom, i, j ,temp ;
	char ch ;
	num = 0, denom = 0 ;

	printf ("Enter the operation : ");
	scanf ("%d / %d%c%d / %d", &num1, &denom1, &ch, &num2, &denom2);

	switch (ch) {
		case '+' :
			{
				num = (num1*denom2) + (num2*denom1) ;
				denom = (denom1*denom2);
				break ;
			}
		case '-' :
			{
				num = (num1*denom2) - (num2*denom1) ;
				denom = (denom1*denom2);
				break ;
			}
		case '*' :
			{
				num = num1 * num2 ;
			        denom = denom1 * denom2 ;
				break ;
			}
		case '/' :
			{
				num = num1 * denom2 ;
				denom = num2 * denom1 ;
				break ;
			}
	}

	if (num == 0 && denom == 0)
		printf ("Invalid input");
	else
	{
		if (num > denom)
			i = num, j = denom ;
		else
			i = denom, j = num ;

		while (i % j)
		{
			temp = i ;
			i = j ;
			j = temp % j ;
		}

		printf ("The result is : %d / %d", num/j , denom/j);
	}
}	
