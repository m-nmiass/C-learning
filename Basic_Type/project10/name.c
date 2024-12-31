#include <stdio.h>

int main ()
{
	char ch , name ;

	printf ("Enter the first and last name : ");

	while (( name = getchar ()) == ' ');

	while (( ch = getchar ()) != ' ');

	while (( ch = getchar ()) == ' ') ;

	while (( ch = getchar ()) != '\n')
		printf ("%c", ch);
	printf (", %c", name);
}
