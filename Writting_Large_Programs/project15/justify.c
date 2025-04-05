#include"justify.h"

char word[MAX_WORD + 2];
char line[MAX_LINE + 1];

void read_lines()
{
	int word_count = 0;
	int line_count = 0;
	bool is_word = false;
	char ch;

	while((ch = getchar()) != '\n'){
		if(!is_space(ch)){
			is_word = true;
			if(word_count < MAX_WORD){
				word[word_count] = ch;
				word_count++;
			}
			else if(word_count == MAX_WORD)
				word[word_count] = '*';
		}
	
		if(is_space(ch) && is_word){
			if(line_count + word_count < MAX_LINE){
				merge(&word_count);
				line[++line_count] = ' ';
			}
			if(line_count + word_count == MAX_LINE){
				merge(&word_count);
				line[line_count] = '\0';
				printf("%s\n", line);
				line_count = 0;
				line[0] = '\0';
			}
			else if(line_count + word_count > MAX_LINE){
				line(line_count) = '\0';
				add_spaces(MAX_LINE-(word_count + line_count));
				printf("%s\n", line);
				line[0] = '\0';
				line_count = 0;
				merge(&word_count);
			}
		}
	}
}

void merge(char *word_count)
{
	word_count < 20 ? word[word_count] = '\0' : word[word_count+2] = '\0';
	strcat(line, word);
	word_count = 0;
}

bool is_space(char ch)
{
	return((ch == ' ') || (ch == '\t'));
}

void ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = *a;
}

void add_spaces(int count)
{
	for(int i = 0; count; i++) {
		if(line[i] == ' ') {
			move(++i);
			line[i] = ' ';
			count--;
		}
	}
}

void move(int start)
{
	char temp = line[start++];
	for(; line[start] != '\0'; start++) {
		ft_swap(temp, line[start]);
	}
}
