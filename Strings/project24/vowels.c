#include<stdio.h>
#include<ctype.h>

#define SIZE 100

int compute_vowels(const char *sentence);
void read_sentence(char *str);

int main()
{
	char str[SIZE];
	int vowels ;

	printf("Enter the sentence : ");
	read_sentence(str);

	vowels = compute_vowels(str);
	printf("Number of vowels is : %d", vowels);
}

int compute_vowels(const char *sentence)
{
	int vowels = 0;
	char ch;

	for(int i = 0; sentence[i] != '\0'; i++) {
		ch = tolower(sentence[i]);
		if(ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e')
			vowels++;
	}

	return vowels;
}

void read_sentence(char *str)
{
	char ch;
	int i = 0;

	while((ch = getchar()) != '\n' && i < SIZE) {
		if(ch != ' ' && ch != '\t')
			str[i] = ch;
		i++;
	}
}
