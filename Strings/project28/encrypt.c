#include<stdio.h>

#define SIZE 1000

void encrypt(char *message, int shift);
void read_message(char *message);

int main()
{
	char message[SIZE];
	int shift ;

	printf("Enter the message : ");
	read_message(message);

	printf("Enter the shift number : ");
	scanf("%d", &shift);

	encrypt(message, shift);

	printf("The crypted message is %s", message);
}

void encrypt(char *message, int shift)
{
	int i = 0;
	while(message[i] != '\0') {
		if(message[i] >= 'A' && message[i] <= 'Z')
			message[i] = ((message[i] - 'A' + shift) % 26) + 'A';
		else if(message[i] >= 'a' && message[i] <= 'z')
			message[i] = ((message[i] - 'a' + shift) % 26) + 'a';
		i++;
	}
}

void read_message(char *message)
{
	int i = 0;
	char ch;

	while((ch = getchar()) != '\n') {
		if(i < SIZE)
			message[i++] = ch;
	}
	message[i] = '\0';
}
