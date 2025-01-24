#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>


char upper_generate(int n);
char lower_generate(int n);
char special_generate();
char digit_generate(int n);
bool check_yes_no();
void password_generate(int size, bool upper, bool digit, bool lower);

int main ()
{
	int size ;
	bool upper = false ;
	bool special = false ;
	bool digit = false ;
	srand(time(NULL));

	printf ("Enter the password lenght : ");
	scanf ("%d", &size);

	printf ("Include upper case(y/n) : ");
	upper = check_yes_no();

	printf ("Include digits(y/n) : ");
	digit = check_yes_no();

	printf ("Include special characters(y/n) : ");
	special = check_yes_no();

	password_generate(size, upper, digit, special);
}

bool check_yes_no()
{
	char c ;
	scanf (" %c", &c);
	if (c == 'y' || c == 'Y' || c == '1')
		return 1 ;
	else
		return 0 ;
}

char lower_generate (int n)
{
	char c = 'a' + n;   
	return c ;
}

char upper_generate (int n)
{
	char c =  'A' + n;
	return c ;
}

char digit_generate (int n)
{
	char c = n + '0';
	return c ;
}

char special_generate ()
{
	char c ;
	int n ;
	int k = rand() % 3 ;
	switch (k) 
	{
		case  0 :
		{	
			n = rand() % 14 ;
			c = '!' + n ;
			break ;
		}
		case 1 :
		{
			n = rand() % 6;
			c = '[' + n ;
			break ;
		}
		case 2 :
		{
			n = rand() % 4;
			c = '{' + n ;
			break ;
		}
	}
	return c ;
}

void password_generate (int size, bool upper, bool digit, bool special)
{
	int count_upper = 0 ;
	int count_lower = 0 ;
	int count_size = 0 ;
	int count_digit = 0 ;
	int count_special = 0 ;
	int rank_upper = 1;
	int rank_lower = 0 ;
	int rank_digit = 2;
	int rank_special = 3;
	int k ;
	char c ;
	int type = upper + digit + special + 1 ;
	//srand (time(NULL));
	k = rand() % type ;
	if (upper + digit + special != 3)
	{
		if (!upper) rank_digit = 1, rank_special = 2, rank_upper = 3 ;
		if (!digit) rank_special = rank_digit, rank_digit = 3 ;
	}

	for (int i = 0, n = 0; i < size; i++, k++)
	{
		k = rand() % type ;

		if (i + 4 >= size)
		{
			if (count_lower == 0 )
				k = rank_lower ;
			if (count_upper == 0 && upper)
				k = rank_upper ;
			if (count_digit == 0 && digit)
				k = rank_digit ;
			if (count_special == 0 && special)
				k == rank_special ;
		}

		if (k == rank_lower)
		{
			n = rand() % 26 ;
			printf ("%c", lower_generate(n));
			count_lower++ ;
		}
		else if (k == rank_upper)
		{
			n = rand() % 26 ;
			printf ("%c", upper_generate(n));
			count_upper++;
		}
		else if (k == rank_digit)
		{
			n = rand() % 10 ;
			printf ("%c", digit_generate(n));
			count_digit++;
		}
		else if (k == rank_special)
		{
			printf ("%c", special_generate());
			count_special++;
		}
	}
	
}
