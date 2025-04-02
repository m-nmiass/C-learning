#include<stdio.h>
#include"justify.h"
#include<string.h>

char str [MAX_LINE + 2] = '\0';

bool is char(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '.' || c == ',' || c == '!');
}

bool is_space(char c)
{
	return (c == ' ') || (c == '\t');
}

void read_line()
{
	char word[MAX_WORD + 2];
	int ch;
	bool is_word = false;
	int word_count = 0;
	int line_count = 0;

	while((ch = getchar()) != '\n') {
		if(is_char(ch) && word_count < 20) {
			word[word_count++] = ch;
			is_word = true;
		}

		if (is_char(ch) && word_count == 20) {
			word[word_count++] = '*';
		}

		if (word_count > 20);

		if(is_space(ch) && is_word) {
			if(line_count + word_count < MAX_LINE + 2) {
				word[word_count] = '\0';
				strcat(str, word);
				line_count += word_count ;
				word_count = 0;
				str[line _count - 1] = ' ';
			}

			else {
				add_spaces(MAX_LINE - line_count + 1);
				line_count = 0;
				printf("%s\n", str);
				str[0] = '\0';
			}
			is_word = false;
			
		}
	}
}

void add spaces(int count)
{
	for(int i = 0; i < MAX_LEN && count; i++) {
		if(count && str[i] == '\0')
			i = 0;
		if(str[i] == 0) {
			move_string(i);
			str[i++] = ' ';
			count--;
		}
	}
}

void move_string(int start)
{
	int temp = str[start];
	while (str[start + 1] != '\0') {
		temp = str[start + 1];
		str[start + 1] = str[start];
		;

	}
}

void 
		
