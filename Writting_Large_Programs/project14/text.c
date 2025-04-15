#include<stdio.h>
#include<stdbool.h>
#include"text.h"

void read_text()
{
	char ch;
	bool is_word = false;
	while((ch = getchar()) != '\n')
	{
		if(is_char(ch)) {
			printf("%c", ch);
			is_word = true;
		}

		else if(is_space(ch) && is_word) {
			printf(" ");
			is_word = false;
		}
	}
}

bool is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '.' || c == ',' || c == '!');
}

bool is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}
