#include<stdbool.h>

#define MAX_LINE 60
#define MAX_WORD 20

extern char str[MAX_LINE + 2];
extern char word[MAX_WORD + 2];

bool is_char(char c);
bool is_space(char c);
void read_line();
void add_spaces();
