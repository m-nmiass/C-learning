#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 10
#define CHAR 26
#define SIZE 1000

int array_digit[N] = {0};
int array_upper[CHAR] = {0};
int array_lower[CHAR] = {0};
int array_insensitive[CHAR] = {0};
char array_input[SIZE];

int user_input();
bool sensitive_check();
void sensitive(int max);
void insensitive(int max);
void output(int max, int sen);
void compression();

int main()
{
	compression();
}

void compression()
{
	bool sen = sensitive_check();
	int max = user_input(sen);
	
	if (sen)
		sensitive(max);
	else
		insensitive(max);

	output(max, sen);
}

bool sensitive_check()
{
	char c ;
	bool i ;

	printf ("Do you want a case_sensitive : (y/n)");
	do
	{
		scanf ("%c", &c);
		if (c != 'y' && c != 'Y' && c != 'n' && c != 'N' && c != '1' && c != '0')
		{
			printf ("Invalid input try again.");
			while (getchar() != '\n');
		}
	}while (c != 'y' && c != 'Y' && c != 'n' && c != 'N' && c != '0' && c != '1');


	if (c == 'Y' || c == 'y' || c == '1')
		i = true ;
	else
		i = false ;

	while (getchar() != '\n');

	return i ;
}

int user_input()
{
	char c;
	int i = 0;

	printf ("Enter the string : ");
	while ((c = getchar()) != '\n' && i < SIZE)
		array_input[i++] = c ;

	return i ;
}

void sensitive(int max)
{
	int i = 0;

	while (i < max)
	{
		if (array_input[i] >= '0' && array_input[i] <= '9')
			array_digit[array_input[i] - '0']++;
		else if (array_input[i] >= 'A' && array_input[i] <= 'Z')
			array_upper[array_input[i] - 'A']++;
		else if (array_input[i] >= 'a' && array_input[i])
			array_lower[array_input[i] - 'a']++;
		i++;
	}
}

void insensitive(int max)
{
	int i = 0;

	while (i < max)
	{
		array_input[i] = toupper(array_input[i]);
		if (array_input[i] >= '0' && array_input[i] <= '9')
			array_digit[array_input[i] - '0']++;
		else if (array_input[i] >= 'A' && array_input[i] <= 'Z')
			array_insensitive[array_input[i] - 'A']++;
		i++;
	}
}

void output(int max, int sen)
{
	int i = 0;

	if (sen)
	{
		while (i < max)
		{
			if (array_lower[i])
				printf ("%c%d", i + 'a', array_lower[i]);
			if (array_upper[i])
				printf ("%c%d", i + 'A', array_upper[i]);
			if (array_digit[i] && i < 10)
				printf ("%d%d", i, array_upper[i]);
			i++;
		}
	}

	else
	{
		while (i < max)
		{
			if (array_insensitive[i])
				printf ("%c%d", i + 'a', array_insensitive[i]);
			if (array_digit[i] && i < 10)
				printf ("%d%d", i, array_digit[i]);
			i++;
		}
	}
}
