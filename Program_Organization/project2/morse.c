#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void input_read();

int main ()
{
	printf ("This program is for morse code convertion\n");
	encode();
}
	
void encode()
{
	char ch ;
	bool flag = false ;

	printf ("Encode : ");
	while ((ch = getchar()) != '\n')
	{
		if (!flag)
			printf ("\""), flag++;
		ch = toupper(ch) ;
		switch (ch) {
			case ' ' : printf ("/") ; break ;
			case 'A' : printf (".- "); break ;
			case 'B' : printf ("-..."); break ;
			case 'C' : printf ("-.-. "); break ;
			case 'D' : printf ("-.. "); break ;
			case 'E' : printf (". "); break ;
			case 'F' : printf ("..-. "); break ;
			case 'G' : printf ("--. "); break ;
			case 'H' : printf (".... "); break ;
			case 'I' : printf (".. "); break ;
			case 'J' : printf (".--- "); break ;
			case 'K' : printf ("-.- "); break ;
			case 'L' : printf (".-.. "); break ;
			case 'M' : printf ("-- "); break ;
			case 'N' : printf ("-. "); break ;
			case 'O' : printf ("--- "); break ;
			case 'P' : printf (".--. "); break ;
			case 'Q' : printf (".-. "); break ;
			case 'R' : printf (".-. "); break ;
			case 'S' : printf ("... "); break ;
			case 'T' : printf ("- "); break ;
			case 'U' : printf ("..- "); break ;
			case 'V' : printf ("...- "); break ;
			case 'W' : printf (".-- "); break ;
			case 'X' : printf ("-..- "); break ;
			case 'Y' : printf ("-.-- "); break ;
			case 'Z' : printf ("--.. "); break ;
			case '0' : printf ("----- "); break ;
			case '1' : printf (".---- "); break ;
			case '2' : printf ("..---"); break ;
			case '3' : printf ("...--"); break ;
			case '4' : printf ("....-"); break ;
			case '5' : printf ("....."); break ;
			case '6' : printf ("-...."); break ;
			case '7' : printf ("--..."); break ;
			case '8' : printf ("---.."); break ;
			case '9' : printf ("----."); break ;
			default : printf ("%c", ch); break ;
		}
	}
	printf ("\"");
}
