#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

int guess_number ;

void generate_number() ;
void user_numbers() ;
bool check () ;

int main ()
{
	printf ("Guess the secret number between 1 and 100.\n");
	do
	{
		generate_number() ;
		user_numbers() ;
	}while (check()) ;

	return 0;
}

void user_numbers()
{
	int number ;
	int count = 0 ;

	printf ("A new number has been chosen.\n");

	while (1)
	{
		scanf ("%d", &number);

		if (number > guess_number)
			printf ("Too big; try again.\n"), count++;
		else if (number < guess_number)
			printf ("Too small; try again.\n"), count++;
		else if (number == guess_number)
		{
			count++ ;
			printf ("You won in %d guesses!\n", count);
			return ;
		}
	}
}

bool check()
{
	char ch ;
	getchar () ;
	printf ("Play again? (Y/N) : ");
	scanf ("%c", &ch);

	ch = toupper (ch) ;
	if (ch == 'Y') 
		return 1 ;
	else
		return 0 ;
}

void generate_number()
{
	srand(time(NULL)) ;
	guess_number = (rand() % 100) + 1 ;
}
