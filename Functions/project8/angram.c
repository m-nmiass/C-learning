#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N  26

void read_word(int counts[N]);
bool equal_array(int counts1[N], int counts2[N]);

int main ()
{
	int word1[26] = {0} ;
	int word2[26] = {0} ;

	printf ("Enter the first word : ");
	read_word (word1);

	printf ("Enter the second word : ");
	read_word (word2);

	if (equal_array(word1, word2))
		printf ("The words are anagrams");
	else
		printf ("The words are not anagrams");
	return 0 ;
}

void read_word (int counts[N])
{
	char ch ;
	while ((ch = getchar ()) != '\n')
	{
		ch = toupper (ch) ;
		if (ch >= 'A' && ch <= 'Z')
			counts[(int)ch - 65]++ ;
	}
}

bool equal_array (int counts1[N], int counts2[N])
{
	int i = 0;
	while (i < N)
	{
		if (counts1[i] != counts2[i])
			return 0 ;
		i++ ;
	}
	return 1 ;
}
