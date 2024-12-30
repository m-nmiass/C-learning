#include <stdio.h>

int main ()
{
	int num;
	float balance, a ;
	balance = 0 ;

	printf ("*** ACME checkbook-balancing program ***\n");
	printf ("Commands : 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

	for (;;)
	{
		printf ("Enter command : ");
		scanf ("%d", &num);

		switch (num)
		{
			case 1 : 
			{
				printf ("Enter amount of credit : ");
				scanf ("%f", &a);
				balance += a ;
				break;
			}
			case 2 :
			{	
				printf ("Enter amount of debit : ");
				scanf ("%f", &a);
				balance -= a ;
				break ;
			}
			case 3 :
			{
				printf ("Current balance : %g\n", balance);
				break ;
			}
			case 4 : return 0 ;
			default :
			{
				 printf ("Invalide number enter the correct one");
				 break ;
			}
		}
	}
}
