#include <stdio.h>
#include <ctype.h>

int main ()
{
	char message[99] ;
	int i = 0;
	int k = 0;

	printf ("Enter a message : ");
	while (( message[i]= getchar ()) != '\n')
		i++ ;


	printf ("In BIFF-speak : ");
	while (k < i)
	{
		message[k] = toupper(message[k]) ;
		switch (message[k]) {
			case 'A' :
		{
			message[k] = '4' ;
			break ;
		}
			case 'B' :
		{
			message[k] = '8' ;
			break ;
		}
			case 'E' :
		{
			message[k] = '3' ;
			break ;
		}
			case 'I' :
		{
			message[k] = '1' ;
			break ;
		}
			case 'O' :
		{
			message[k] = '0' ;
			break ;
		}
			case 'S' :
		{
			message[k] = '5' ;
			break ;
		}

		}
		printf ("%c", message[k]);
		k++;
	}

	printf ("!!!!!!!!!!");
}
