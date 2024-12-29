#include <stdio.h>

int main ()
{
	int num, num1, num2 ;

	printf ("Enter the number : ");
	scanf ("%d", &num);

	num1 = num / 10 ;
	num2 = num % 10 ;

	printf ("You entered the number : ");

	switch (num1)
	{
		case 1 :
		switch (num2)
		{
			case 0 : printf ("ten"); break ;
			case 1 : printf ("eleven"); break ;
			case 2 : printf ("twelve"); break ;
			case 3 : printf ("thirteen"); break;
			case 4 : printf ("forteen"); break ;
			case 5 : printf ("fifteen"); break ;
			case 6 : printf ("sixteen"); break ;
			case 7 : printf ("seventeen"); break ;
			case 8 : printf ("eighteen"); break ;
			case 9 : printf ("nineteen"); break ;
		}
		if (num < 10 || num >= 20)
		{
		case 2 : printf ("twenty");break;
		case 3 : printf ("thirty");break;
		case 4 : printf ("fourty");break;
		case 5 : printf ("fifty");break;
		case 6 : printf ("sixty");break;
		case 7 : printf ("seventy");break;
		case 8 : printf ("eighty");break;
		case 9 : printf ("ninty");break ;
		case 0 :
			switch (num2) 
			{
				case 0 : printf ("zero");break;
			}
		}
	}

	if (num < 11 || num > 19)
	{
	switch (num2)
	{
		case 1 : printf ("-one");break;
		case 2 : printf ("-two");break;
		case 3 : printf ("-three");break;
		case 4 : printf ("-four");break;
		case 5 : printf ("-five");break;
		case 6 : printf ("-six");break;
		case 7 : printf ("-seven");break;
		case 8 : printf ("-eight");break;
		case 9 : printf ("-nine");break ;
	}
	}
}

