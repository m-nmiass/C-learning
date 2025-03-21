#include<stdio.h>
#include<string.h>

#define SIZE 1000

void reverse(char *message);
void read_message(char *message);
void ft_swap(char *a, char *b);

int main()
{
	char message[SIZE];

	printf("Enter the message : ");
	read_message(message);

	reverse(message);
	printf("The reversed message is : %s", message);
}

void reverse(char *message)
{
	int i = 0;
	int j = strlen(message) - 1;

	for(; i < j; j--, i++)
		ft_swap(&message[i], &message[j]);
}

void read_message(char *message)
{
	int i = 0;
	char ch;

	while((ch = getchar()) == ' ' || ch == '\t');
	message[i++] = ch;

	while((ch = getchar()) != '\n')
		if(i < SIZE)
			message[i++] = ch;

	message[i] = '\0';
}

void ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
