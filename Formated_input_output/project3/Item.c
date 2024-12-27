#include <stdio.h>

int main ()
{
	int item, month, day, year ;
	float price ;

	printf ("Enter item number : ");
	scanf ("%d", &item);

	printf ("Enter unit price : ");
	scanf ("%f", &price);

	printf ("Enter purchase date (mm/dd/yyyy) : ");
	scanf ("%d / %d / %d", &month, &day, &year);

	printf ("Item\t\tUnit\t\tPurchase\n    \t\tPrice\t\tDate\n");
	printf ("%d\t\t$%6g\t\t%d/%d/%d", item, price, month, day, year);
}
