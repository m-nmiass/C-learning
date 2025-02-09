#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j ;

	printf ("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf ("(%1d%1d%1d) %1d%1d%1d-%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

	printf ("You entered : %d%d%d.%d%d%d.%d%d%d%d", a, b, c, d, e, f, g, h, i, j);
}
