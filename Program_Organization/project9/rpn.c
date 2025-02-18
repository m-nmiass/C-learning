#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE] = {0};
int top = 0 ;

void push (int i);
int pop ();
bool is_empty();
bool is_full();
void stack_overflow();
void stack_underflow();
void calculator();
int operations(int i, int j, char c);

int main()
{
	calculator();
	return 0;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop()
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

bool is_full()
{
	return top == STACK_SIZE;
}

bool is_empty()
{
	return top == 0;
}

void stack_overflow()
{
	printf ("Expression is too complex.");
	exit(1);
}

void stack_underflow()
{
	printf ("Not enough operands in expression.");
	exit(1);
}

int operations(int i, int j, char c)
{
	if (c == '+')
		return i + j ;
	else if (c == '-')
		return i - j ;
	else if (c == '*')
		return i * j ;
	else
		return i / j ;
}

void calculator()
{
	char c ;
	int i ;
	printf ("Enter an RPN expression : ");
	while (1)
	{
		scanf (" %c", &c);
		if (c >= '0' && c <= '9')
			push(c - '0');
		else if (c == '+' || c == '-' || c == '*' || c == '/')
		{
			i = operations(pop(), pop(), c);
			push(i);
		}
		else if (c == '=')
		{
			printf ("Value of expression : %d", pop());
			return ;
		}
	}
}
