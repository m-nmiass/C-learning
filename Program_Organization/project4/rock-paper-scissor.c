#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int wins = 0 ;
int draws = 0 ;
int loses = 0 ;

void game() ;
int user_input() ;
int computer_choice() ;
void win_check(int user, int computer) ;

int main ()
{
	game();
	return 0 ;
}


void game()
{
	int user ;
	int computer ;
	
	while (1)
	{
		printf ("/******************************************************/\n");
		printf ("***Win   :   %d      Lose   :   %d      Draw   :   %d***\n", wins, loses, draws);
		printf ("*******************************************************/\n");
		
		user = user_input();

		if (!user)
		{
			printf ("Game is over\n");
			if (wins > loses)
				printf ("You won");
			else if (wins < loses)
				printf ("You lost");
			else
				printf ("Draw");
			return ;
		}

		computer = computer_choice() ;
		
		win_check(user, computer);
	}
}

int user_input()
{
	int input ;
	printf ("\n\nEnter your choice Rock : 3 Scissor : 2 Paper : 1 Exit : 0\n");

	do
	{
		scanf ("%d", &input);
		if (input < 0 || input > 3)
			printf ("Invalid input try again.\n");
	}while (input < 0 || input > 3);

	return input ;
}

int computer_choice()
{
	int computer ;
	srand(time(NULL));

	computer = rand() % 3 + 1 ;

	if(computer == 3)
		printf ("computer choice is Rock\n");
	else if(computer == 2)
		printf ("Computer choice is Scissor\n");
	else
		printf ("Computer choice is Paper\n");
	return computer ;
}

void win_check(int user, int computer)
{
	if (user == computer)
	{
		draws++;
		printf ("draw\n");
	}
	else if (((user > computer && user-computer == 1)) || ((user < computer) && (computer - user == 2)))
	{
		wins++;
		printf ("You won\n");
	}
	else
	{
		loses++;
		printf ("You lost\n");
	}
}
