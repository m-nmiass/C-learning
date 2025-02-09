#include <stdio.h>

int main ()
{
	int trade ;
	float commission ;

	printf ("Enter value of trade : ");
	scanf ("%d", &trade);

	if (trade <= 2500)
		commission = 30 + (((float)trade * 1.7)/100) ;
	else if (trade <= 6250)
		commission = 56 + (((float)trade * 0.66)/100) ;
	else if (trade <= 20000)
		commission = 76 + (((float)trade * 0.34)/100) ;
	else if (trade <= 50000)
		commission = 100 + (((float)trade * 0.22)/100) ;
	else if (trade <= 500000)
		commission = 155 + (((float)trade * 0.11)/100) ;
	else
		commission = 255 + (((float)trade * 0.09)/100) ;

	if (commission < 39)
		commission = 39 ;

	printf ("Commission : %.2f", commission);
}
