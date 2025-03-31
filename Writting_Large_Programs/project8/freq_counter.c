#include"freq_counter.h"
#include<stdio.h>

char freq[26] = {0};

void read_line()
{
	char ch;
	while((ch = getchar()) != '\n') {
		if(is_char(ch)){
			ch = to_lower(ch);
			freq[ch - 'a']++;
		}
	}
}

bool is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_lower(char c)
{
	return (c >= 'a' && c <= 'z') ? c : (c - 'A' + 'a');
}

void print_freq()
{
	for(int i = 0; i < 26; i++)
		if(freq[i])
			printf("%c : %d\n", 'a' + i, freq[i]);
}
