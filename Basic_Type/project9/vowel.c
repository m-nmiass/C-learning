#include <stdio.h>
#include <ctype.h>

int main ()
{
	int count = 0 ;
	char ch ;

	printf ("Enter a sentence : ");

	while ((ch = getchar ()) != '\n')
	{
		ch = toupper (ch) ;
		switch (ch) {
			case 'A' : case 'E' : case 'I' : case 'U' : case 'O' :
				count++ ;
		}
	}

	printf ("Your sentence contains %d vowels .", count);
}
