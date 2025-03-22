#include<stdio.h>
#include<stdbool.h>

bool is_vowel(char ch);

int main(int argc, char **argv)
{
	int vowels;

	for(int i = 1; i < argc; i++) {
		vowels = 0;
		for(int j = 0; argv[i][j] != '\0'; j++) {
			if(is_vowel(argv[i][j]))
				vowels++;
			}
			printf("%s has %d vowels\n", argv[i], vowels);
	}
}

bool is_vowel(char ch)
{
	return(ch == 'a' || ch == 'A' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I');
}
