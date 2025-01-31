#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

char board[SIZE][SIZE];

void array_generate();
void player1_input(int place);
void player2_input(int place);
int win_check();
void print_array();
void game();
bool input_check();

int main ()
{
	array_generate ();
	game();
}

void array_generate()
{
	char count = '1' ;
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++, count++)
			board[i][j] = count;
	print_array();
}

void print_array()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE ; j++)
			printf ("%c   ", board[i][j]);
		printf("\n\n");
	}
}

void game()
{
	int count = 0;
	int place ;
	int win ;
	while (count < 9)
	{
		if (count % 2 == 0)
		{
			printf ("1st player choose X place : ");
			do
			{
				scanf ("%d", &place);
				if (!input_check(place))
					printf ("Invalid input try again\n");
			}while (!input_check(place));
			player1_input (place);
		}
		else
		{
			printf ("2nd player choose 0 place : ");
			do
			{
				scanf ("%d", &place);
				if (!input_check(place))
					printf ("Invalid input try again\n");
			}while (!input_check(place));
			player2_input (place);
		}
		print_array();
		win = win_check();
		if (win == 1)
		{
			printf ("First player won");
			break ;
		}
		else if (win == 2)
		{
			printf ("Second player won");
			break ;
		}
		if (count == 8 && !win)
			printf ("Draw");
		count++;
		printf ("\n");
	}
}


bool input_check (int count)
{
	int i ;
	int j = (count - 1) % 3 ;
	if (count > 9 || count < 1)
		return 0 ;

	if (count < 4) i = 0;
	else if (count < 7) i = 1;
	else i = 2;

	if (board[i][j] != 'X'  && board[i][j] != 'O')
		return 1 ;
	else 
		return 0 ;
}

void player1_input (int place)
{
	int i ;
	int j = (place - 1) % 3 ;
	if (place < 4) i = 0 ;
	else if (place < 7) i = 1 ;
	else i = 2 ;

	board[i][j] = 'X' ;
}

void player2_input (int place)
{
	int i ;
	int j = (place - 1) % 3 ;
	if (place < 4) i = 0 ;
	else if (place < 7) i = 1 ;
	else i = 2 ;

	board[i][j] = 'O';
}

int win_check ()
{
	// vertical check 
	for (int i = 0, j = 0 ; i < SIZE ; i++)
	{
		if ((board[i][j] == board[i][j+1]) && (board[i][j]== board[i][j+2]))
		{
			if (board[i][j] == 'X')
				return 1 ;
			else
				return 2 ;
		}
	}
	
	// horisental check
	for (int i = 0, j = 0; j < SIZE; j++)
	{
		if ((board[i][j] == board[i+1][j]) && (board[i][j] == board[i+2][j]))
		{
			if (board[i][j] == 'X')
				return 1 ;
			else 
				return 2 ;
		}
	}

	// line check
	if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
	{
		if (board[0][0] == 'X')
			return 1 ;
		else 
			return 2 ;
	}
	
	if ((board[0][2] == board[1][1]) && (board[1][1] == board [2][0]))
	{
		if (board[0][2] == 'X')
			return 1 ;
		else
			return 2 ;
	}

	else
		return 0 ;
}	
