#include <stdio.h>

int main ()
{
	int word, characters ;
	float average ;
	char ch ;

	word = 1, characters = 0 ;

	printf ("Enter a sentence : ");

	while ((ch = getchar ()) != '\n')
	{
		if (ch == ' ')
		{
			word++ ;
			while ((ch = getchar ()) == ' ') ;
			characters++ ;
		}
		else
			characters++ ;
	}
	printf ("characters %d, words %d\n", characters, word);
	average = (float)characters / word ;

	printf ("Average word length : %.1f", average );
}
