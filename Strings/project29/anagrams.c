#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define SIZE 100

bool are_anagrams(const char *word1, const char *word2);
void read_word(char *word);

int main()
{
	char word1[SIZE];
	char word2[SIZE];

	printf("Enter the first word : ");
	read_word(word1);

	printf("Enter the second word : ");
	read_word(word2);

	if(are_anagrams(word1, word2))
		printf("They are anagrams.");
	else
		printf("They are not anagrams.");
}

void read_word(char *word)
{
	int i = 0;
	char ch;

	while((ch = getchar()) == ' ' || ch == '\t');
	word[i++] = ch;

	while((ch = getchar()) != '\n')
		if(i < SIZE)
			word[i++] = ch;

	word[i] = '\0';
}

bool are_anagrams(const char *word1, const char *word2)
{
	int i = 0;
	int j = strlen(word2) - 1;

	for(; j >= 0; j--, i++)
		if(word2[j] != word1[i])
			return false;
	return true;
}
