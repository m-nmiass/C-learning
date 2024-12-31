#include <stdio.h>

int main ()
{
	int num ;
	char ch ;

	printf ("Enter a message : ");

	num = 0 ;
	while ((ch = getchar ()) != '\n')
		num++ ;

	printf ("Your message was %d character (s) long.", num);
}
