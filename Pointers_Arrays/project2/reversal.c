#include <stdio.h>

#define N 10000

char ar[N];

char *user_input();
void array_reverse();
void print_array(char *p);

int main()
{
	array_reverse();
}

char *user_input()
{
	char *p = ar ;
	printf ("The message : ");
	while ((*p++ = getchar()) != '\n');
	return (--p) ;
}

void print_array(char *p)
{
	printf ("The reversal message is : ");
	while (p >= ar)
		printf ("%c", *p--);
}

void array_reverse()
{
	char *p ;
	p = user_input() ;
	print_array(--p);
}
