#include"justify.h"

char word[MAX_WORD + 2];
char line[MAX_LINE + 1];

void read_lines()
{
	int word_count = 0;
	int line_count = 0;
	bool is_word = false;
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
				merge();
				line[++line_count] = ' ';
			}
			if(line_count + word_count == MAX_LINE){
				merge();
				line[line_count] = '\0';
				printf("%s\n", line);
				line_count = 0;
				line[0] = '\0';
			}
			else if(line_count + word_count > MAX_LINE){
				add_spaces(MAX_LINE-(word_count + line_count));
				printf("%s\n", line);
				line[0] = '\0';
				line_count = 0;
				merge();
			}
		}
	}
}
