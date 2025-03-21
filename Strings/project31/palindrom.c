#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

#define SIZE 1000

bool is_palindrome(const char *message);
void read_message(char *message);

int main()
{
	char message[SIZE];

	printf("Enter the message : ");
	read_message(message);

	if(is_palindrome(message))
		printf("Is polindrom");
	else
		printf("Is not polindrom");
}

void read_message(char *message)
{
	int i = 0;
	char ch;

	while((ch = getchar()) == ' ' || ch == '\t');
	message[i++] = ch;

	while((ch = getchar()) != '\n') {
		ch = tolower(ch);
		if(i < SIZE && (ch >= 'a' && ch <= 'z'))
			message[i++] = ch;
	}
	message[i] = '\0';
}

bool is_palindrome(const char *message)
{
	int i = 0;
	int j = strlen(message) - 1;

	for(; i < j; i++, j--)
		if(message[i] != message[j])
			return 0;
	return 1;
}
