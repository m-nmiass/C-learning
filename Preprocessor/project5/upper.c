#include<stdio.h>

#define TOUPPER(c) c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c

int main()
{
	char c;

	printf ("Enter a character : ");
	scanf("%c", &c);

	printf("%c in upper version is : %c", c, TOUPPER(c));
}
