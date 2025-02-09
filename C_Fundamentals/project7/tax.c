#include <stdio.h>

#define TAX  5.0f

int main ()
{
	float amount ;

	printf ("Enter the amount : ");
	scanf ("%f", &amount);

	amount = amount + ((amount * TAX)/100) ;

	printf ("With tax added : %.2f", amount);
}
