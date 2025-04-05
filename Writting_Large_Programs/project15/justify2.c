#include "justify.h"

char word[MAX_WORDS + 2] = {'\0'};
char line[MAX_LINE + 1] = {'\0'};

void read_lines()
{
    int word_count = 0;
    bool is_word = false;
    char ch;

    line[0] = '\0';

    while ((ch = getchar()) != EOF) {
        if (!is_space(ch) && ch != '\n') {
            is_word = true;
            if (word_count < MAX_WORDS) {
                word[word_count++] = ch;
            }
        }

        if ((is_space(ch) || ch == '\n') && is_word) {
            is_word = false;

            int line_len = strlen(line);
            if (line_len + word_count < MAX_LINE) {
                merge(&word_count);
                strcat(line, " ");
            }

            line_len = strlen(line);
            if (line_len + word_count == MAX_LINE) {
                merge(&word_count);
                printf("%s\n", line);
                line[0] = '\0';
            } else if (line_len + word_count > MAX_LINE) {
                add_spaces(MAX_LINE - line_len);
                printf("%s\n", line);
                line[0] = '\0';
                merge(&word_count);
                strcat(line, " ");
            }
        }

        if (ch == '\n') {
            if (word_count > 0) {
                merge(&word_count);
            }
            printf("%s\n", line);
            line[0] = '\0';
        }
    }

    if (word_count > 0 || strlen(line) > 0) {
        merge(&word_count);
        printf("%s\n", line);
    }
}

void merge(int *word_count)
{
    if (*word_count >= MAX_WORDS) {
        word[MAX_WORDS] = '*';
        word[MAX_WORDS + 1] = '\0';
    } else {
        word[*word_count] = '\0';
    }

    strcat(line, word);
    *word_count = 0;
}

bool is_space(char ch)
{
    return ch == ' ' || ch == '\t';
}

void ft_swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void add_spaces(int count)
{
    for (int i = 0; count > 0; i++) {
        if (line[i] == ' ') {
            move(++i);
            line[i] = ' ';
            count--;
        }
    }
}

void move(int start)
{
    char temp = line[start++];
    for (; line[start] != '\0'; start++) {
        ft_swap(&temp, &line[start]);
    }
    line[start] = temp;
    line[start + 1] = '\0';
}

