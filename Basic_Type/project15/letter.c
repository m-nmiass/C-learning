#include <stdio.h>
#include <ctype.h>

int main ()
{
	char letters ;
	int num_digit = 0;
	int count = 0 ;

	printf ("Enter a string : ");
	while ((letters = getchar()) != '\n')
	{
		if (!count)
			printf ("Modified string : "), count++;
		if (isdigit(letters))
			num_digit ++;
		if (letters >= 'A' && letters <= 'Z')
			letters = tolower(letters);
		else if (letters >= 'a' && letters <= 'z')
			letters = toupper(letters);
		printf ("%c",letters);
	}

	printf ("\nNumber of digits : %d", num_digit);
}
