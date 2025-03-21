#include<stdio.h>

#define SIZE 50

int compute_scrabble_value(const char *word);
void read_word(char *word);
char ft_tolower(char ch);

int main()
{
	char word[SIZE];
	int scrabble ;

	printf("Enter a word : ");
	read_word(word);

	scrabble = compute_scrabble_value(word);
	printf("The scrabble valus is : %d", scrabble);

	return 0;
}

int compute_scrabble_value(const char *word)
{
	int scrabble = 0;
	int i = 0;
	char ch ;
	while(word[i] != '\0') {
		ch = ft_tolower(word[i]);
		if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'l') || (ch == 'n') || (ch == 'o') || (ch == 'r') || (ch == 's') || (ch == 't') || (ch == 'u'))
			scrabble += 1;
		else if((ch == 'd') || (ch == 'g'))
			scrabble += 2;
		else if((ch == 'b') || (ch == 'c') || (ch == 'm') || (ch == 'p'))
			scrabble += 3;
		else if((ch == 'f') || (ch == 'h') || (ch == 'v') || (ch == 'w') || (ch == 'y'))
			scrabble += 4;
		else if(ch == 'k')
			scrabble += 5;
		else if((ch == 'j') || (ch == 'x'))
			scrabble += 6;
		else if((ch == 'q') || (ch == 'z'))
			scrabble += 10;
		i++;
	}
	return scrabble;
}

void read_word(char *word)
{
	int i = 0;
	char ch;
	while ((ch = getchar()) != '\n' && i < SIZE)
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' || ch <= 'Z'))
			word[i++] = ch;

	word[i] = '\0';
}

char ft_tolower(char ch)
{
	if(ch >= 'a' && ch <= 'z')
		return ch;
	else
		return (ch - 'A') + 'a';
}
