#include<stdio.h>
#include<stdbool.h>

#define MAX_WORDS 30
#define MAX_LEN 20

bool read_word(char (*str)[]);

int main()
{
	char str[MAX_WORDS][MAX_LEN];
	int max = 0;
	bool cn = true;
	char ch;

	printf ("Enter a sentence :");
	
	for(; max < MAX_WORDS && cn; max++)
		cn = read_word(str + max);

	printf ("The Reversal sentence : ");
	for(int i = max - 1; i >= 0; i--)
		printf ("%s ", str[i]);
}

bool read_word(char (*str)[])
{
	char ch;
	int i = 0;

	while ((ch = getchar()) == ' ' || ch == '\t');
	if (ch == '\n')
		return false;
	(*str)[i++] = ch;

	while((ch = getchar()) != ' ' && ch != '\t' && ch != '\n')
		if(i < MAX_LEN)
			(*str)[i++] = ch;

	(*str)[i] = '\0';

	if(ch == '\n')
		return false;
	else
		return true;
}

