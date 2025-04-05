#include<stdio.h>
#include<stdbool.h>

#define MAX_WORD 20
#define MAX_LINE 60

extern word[MAX_WORDS + 2];
extern line[MAX_LINE + 1];

bool is_space(char ch);
void read_lines();
bool is_space(char ch);
void ft_swap(char *a, char *b);
void add_spaces(int count);
void merge(char *word_count);
void move(int start);
