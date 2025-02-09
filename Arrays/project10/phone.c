#include <stdio.h>
#include <ctype.h>

#define MAX_PHONE 55

int main ()
{
	char a[MAX_PHONE] ;
	int i = 0 ;
	int j = 0 ;
	char c ;

	printf ("Enter phone number : ");

	while ((c = getchar()) != '\n')
		a[i] = c, i++ ;

	while (j < i)
	{
		a[i] = toupper (a[i]) ;
		if (a[j] >= 'A' && a[j] <= 'Z' && a[j] != 'Q')
		{
			if (a[j] < 'Q')
				c = (a[j] - 'A' + 6)/3 ;
			else if (a[j] > 'Q')
				c = (a[j] - 'A' + 4)/3 ;
			printf ("%d", c), j++ ;
		}
		else
			printf ("%c", a[j]),j++ ;
	}
}
