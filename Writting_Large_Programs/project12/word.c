#include"word.h"
#include<stdio.h>

int word = 0;

void read_line()
{
	bool is_word = false;
	char ch;
	while((ch = getchar()) != '\n') {
		if(is_char(ch) && !is_word) {
			is_word = true;
			word++;
		}
		if(is_space(ch))
			is_word = false;
	}
}

bool is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool is_space(char c)
{
	return (c == ' ' || c == '\t');
}
