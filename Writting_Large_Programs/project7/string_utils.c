#include"string_utils.h"
#include<stdio.h>

char str[SIZE];

void reverse_string(int size)
{
	int j = size/2;
	for(int i = 0; i <= j; i++) {
		ft_swap(str + i, str + size - i - 1);
	}
}

void ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void read_line(int size)
{
	char ch;
	int i = 0;

	while((ch = getchar()) == ' ' || ch == '\t');
	str[i++] = ch;
	
	while((ch = getchar()) != '\n')
		if(i < size)
			str[i++] = ch;
	str[i] = '\0';
}
