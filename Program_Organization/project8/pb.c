#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int top = 0 ;
char constents[STACK_SIZE] = {'0'} ;

void push(char c);
char pop();
bool is_empty();
bool is_full();
void stack_overflow();
void stack_underflow();
char user_input();
void check();
void nested();

int main ()
{
	nested();
	return 0 ;
}

bool is_empty()
{
	return top == 0 ;
}

bool is_full()
{
	return top == STACK_SIZE ;
}

void stack_overflow()
{
	printf ("Stack overflow");
	exit(1);
}

void stack_underflow()
{
	printf ("Parentheses/braces are not nested properly.");
	exit(1);
}

void push(char c)
{
	if (is_full())
		stack_overflow();
	else
		constents[top++] = c ;
}

char pop()
{
	if (is_empty())
		stack_underflow();
	else
		return constents[--top];
}

void check()
{
	if (is_empty())
		printf ("Parentheses/braces are nested properly.");
	else
		printf ("Parentheses/braces are not nested properly.");
}

void nested()
{
	char c ;

	printf ("Enter parentheses/braces : ");
	while ((c = getchar()) != '\n')
	{
		if (c == '(' || c == '{')
			push(c);
		else if (c == ')')
		{
			if (pop() != '(')
				top++;
		}
		else if (c == '}')
		{
			if (pop() != '{')
				top++;
		}
	}
	check();
}
