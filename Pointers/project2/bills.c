#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main ()
{
	int dollars, twenties, tens, fives, ones ;

	printf ("Enter the dollar amount : ");
	scanf ("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf ("$20 Bills : %d\n", twenties);
	printf ("$10 Bills : %d\n", tens);
	printf (" $5 Bills : %d\n", fives);
	printf (" $1 Bills : %d\n", ones);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20 ;
	dollars %= 20 ;
	*tens = dollars / 10 ;
	dollars %= 10 ;
	*fives = dollars / 5 ;
	dollars %= 5 ;
	*ones = dollars ;
}
