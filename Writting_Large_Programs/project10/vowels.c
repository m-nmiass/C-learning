#include"vowels.h"
#include<stdio.h>

int a = 0;
int o = 0;
int i = 0;
int e = 0;
int u = 0;

void read_line()
{
	char ch;
	while((ch = getchar()) != '\n'){
		if(ch == 'a' || ch == 'A')
			a++;
		else if(ch == 'o' || ch == 'O')
			o++;
		else if(ch == 'i' || ch == 'I')
			i++;
		else if(ch == 'e' || ch == 'E')
			e++;
		else if(ch == 'u' || ch == 'U')
			u++;
	}
}

void print_vowels()
{
	printf("a : %d\n", a);
	printf("o : %d\n", o);
	printf("i : %d\n", i);
	printf("e : %d\n", e);
	printf("u : %d\n", u);
}
