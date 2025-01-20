#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 100

int main ()
{
	char str[SIZE] = {0} ;
	char copy[SIZE] = {0} ;
	int count_char[256] = {0} ;
	int vowel_count = 0 ;
	int consonant_count = 0 ;
	int i = 0 ;
	int max_count = 0 ;
	bool is_palindrome = true ;

	printf ("Enter a string : ");
	while ((str[max_count] = getchar()) != '\n')
		max_count++ ;

	while (i < max_count)
		copy[i] = str[max_count-1-i], i++ ;

	i = 0;

	while (i < max_count)
	{
		if (copy[i] != str[i])
		{
			is_palindrome = false ;
			break ;
		}
		i++ ;
	}

	i = 0;
	while (i < max_count)
		count_char[(int)str[i++]]++;


	i = 0;
	while (i <= max_count)
	{
		str[i] = toupper(str[i]);
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'A' || str[i] == 'O' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I')
				vowel_count++ ;
			else
				consonant_count++ ;
		}
		i++;
	}
	

	printf ("Step 1: String stored.\n");
	printf ("Step 2: vowels %d consonants %d\n", vowel_count, consonant_count);
	is_palindrome ? printf ("Step 3: Is palindrom\n") : printf ("Step 3: Not a palindrom\n");
	printf ("Step 4: Reversed string : ");
	i = 0 ;
	while (i < max_count)
		printf ("%c", copy[i++]);

	printf ("\nStep 5: Character frquencies\n");
	i = 0 ;
	while (i < 256)
	{
		if (count_char[i] > 0)
			printf ("%c : %d\n", i, count_char[i]);
		i++ ;
	}

	printf ("Step 6: Upper case ");
	i = 0 ;
	while (i < max_count)
		printf ("%c", str[i++]) ;
}
