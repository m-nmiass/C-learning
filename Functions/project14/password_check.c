#include <stdio.h>
#include <stdbool.h>

bool upper_exist (char c);
bool lower_exist (char c);
bool digit_exist (char c);
int password_check(int upper, int lower, int digit, int special, int characters);
void result (int count);

int main ()
{
	int upper = 0 ;
	int lower = 0 ;
	int digit = 0 ;
	int special = 0 ;
	char c ;
	int characters = 0 ;
	int count ;

	printf ("Enter a password : ");
	while ((c = getchar()) != '\n')
	{
		if (upper_exist (c))
			upper++ ;
		else if (lower_exist (c))
			lower++ ;
		else if (digit_exist (c))
			digit++ ;
		else
			special++ ;
		characters++ ;
	}

	count = password_check (upper, lower, digit, special, characters) ;
	result (count);
}

bool upper_exist (char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1 ;
	return 0 ;
}

bool lower_exist (char c)
{
	if (c >= 'a' && c <= 'z')
		return 1 ;
	return 0 ;
}

bool digit_exist (char c)
{
	if (c >= '0' && c <= '9')
		return 1 ;
	return 0 ;
}

int password_check (int upper, int lower, int digit, int special, int characters)
{
	int count = 0 ;
	if (upper > 0)
		count++ ;
	if (lower > 0)
		count++ ;
	if (digit > 0)
		count++ ;
	if (special > 0)
		count++ ;
	if (characters > 7)
		count++ ;

	return count ;
}

void result (int count)
{
	printf ("Your password is :");
	if (count < 3)
		printf ("Weak");
	else if (count < 5)
		printf ("Moderate");
	else
		printf ("Strong");
}
