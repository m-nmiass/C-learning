#include <stdio.h>

int main ()
{
	int amount ;

	printf ("Enter the amount of money : ");
	scanf ("%d", &amount);

	printf ("$20 bills : %d\n", amount/20);
	amount = amount % 20 ;
	printf ("$10 bills : %d\n", amount/10);
	amount = amount % 10 ;
	printf (" $5 bills : %d\n", amount/5);
	amount = amount % 5 ;
	printf (" $1 bills : %d\n", amount);
}
