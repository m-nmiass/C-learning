#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 50
#define CHAR 26

bool read_words(int valid_characters[CHAR]);
bool check_word(int scrumble[CHAR], int word[CHAR]);
void reset_word (int []);

int main ()
{
	int scrumble[CHAR] = {0} ;
	int word[CHAR] = {0} ;
	int count = 0 ;
	int i = 1 ;
	
	while (1)
	{
		printf ("Enter the scramble word : ");
		if (read_words(scrumble))
			break ;
		else
			printf ("Invalide Input try again \n");
	}

	while (count > 10 || count <= 0)
	{
		printf ("Enter the numbers of valid words (max 10) : ");
		scanf ("%d", &count);
		getchar();
	}
	
	
	while (count > 0)
	{
		printf ("Enter valid word %d : ", i);
		read_words(word);
		if(!check_word(scrumble, word))
			printf ("Non valid word try again.\n");
		else
			count--;
		reset_word(word);
		i++ ;
	}
}

bool read_words(int valid_characters[CHAR])
{
	int i = 0 ;
	char c ;
	while ((c = getchar ()) != '\n')
	{
		c = tolower(c);
		if ( c >= 'a' && c <= 'z')
		{
			valid_characters[(int)c - 97]++;
			i++;
		}
		else
			return 0;
	}

	if (i < SIZE)
		return 1;
	else
		return 0;
}

bool check_word(int scrumble[CHAR], int word[CHAR])
{
	for (int i = 0; i < CHAR; i++)
		if (scrumble[i] < word[i])
			return 0;
	return 1;
}

void reset_word (int word[CHAR])
{
	for (int i = 0; i < CHAR; i++)
		word[i] = 0 ;
}
