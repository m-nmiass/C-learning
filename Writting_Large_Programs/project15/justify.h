#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define MAX_WORDS 20
#define MAX_LINE 60

extern char word[MAX_WORDS + 2];
extern char line[MAX_LINE + 1];

bool is_space(char ch);
void read_lines();
bool is_space(char ch);
void ft_swap(char *a, char *b);
void add_spaces(int count);
void merge(int *word_count);
void move(int start);
