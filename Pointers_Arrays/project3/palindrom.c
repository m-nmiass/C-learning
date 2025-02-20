#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 10000

char a[N];

char *array_input();
bool array_check(char *p);
void palindrom();
bool is_char(char c);

int main()
{
	palindrom();
}

char *array_input()
{
	char *p = a;
	printf ("Enter a message : ");
	while ((*p++ = getchar()) != '\n');
	return --p;
}

bool array_check(char *p)
{
	char *q = &a[0];
	p-- ;
	while (p >= a)
	{
		while(!is_char(*p))
		{
			p--;
		}

		while(!is_char(*q))
		{
			q++;
		}
		if(toupper(*p) != toupper(*q))
		{
			return 0;
		}
		p--, q++ ;
	}
	return 1 ;
}

bool is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void palindrom()
{
	if (array_check(array_input()))
		printf ("Polindrom");
	else
		printf ("Not polindrom");
}
