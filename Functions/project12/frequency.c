#include<stdio.h>

#define SIZE 127
	
void read_char(int characters[SIZE]);
void print_frequency(int characters[SIZE]);

int main ()
{
	int characters[SIZE] = {0};
	read_char(characters);
	print_frequency(characters);
}

void read_char(int characters[SIZE])
{
	char character ;
	while ((character = getchar()) != '\n')
		characters[(int)character]++;
}

void print_frequency(int characters[SIZE])
{
	for (int i = 0; i < SIZE; i++)
		if (characters[i] > 0)
			printf ("%d	%c	%d\n",i, i, characters[i]);
}
