#include"string_utils.h"
#include<stdbool.h>

void string_reverse(char *str)
{
	int j = strlen(str);
	for(int i = 0; i <= j/2; i++)
		ft_swap(str + i, str + j - i);
}

void ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
