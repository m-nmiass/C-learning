#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

bool palindrome_check (char a[], char copy[], int n);
void reverse_string (char a[], char reverse[], int n);
int read_string (char a[]);

int main ()
{
	char a[SIZE];
	char reverse[SIZE];
	int n = read_string (a);
	reverse_string (a, reverse, n);
	
	if (palindrome_check(a, reverse, n))
		printf ("Palindrome");
	else
		printf ("Not a Palindrome");
}

int read_string(char a[])
{
	int count = 0 ;
	int i = 0 ;
	while ((a[i] = getchar()) != '\n')
	{
		i++;
		count++;
	}
	return count ;
}

void reverse_string(char a[], char reverse[], int n)
{
	for (int i = 0; n >= 0; i++, n--)
		reverse[i] = a[n - 1];

	for (int i = 0; i < n; i++)
		printf ("%c	%c\n", a[i], reverse[i]);
}

bool palindrome_check(char a[], char reverse[], int n)
{
	for (int i = 0; i < n; i++)
		if (reverse[i] != a[i])
			return 0 ;
	return 1 ;
}
