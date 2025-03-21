#include<stdio.h>

#define SIZE 100

void reverse_name(char *name);
void read_name(char *name);

int main()
{
	char name[SIZE];

	printf("Enter the name : ");
	read_name(name);

	reverse_name(name);

	return 0;
}

void reverse_name(char *name)
{
	char ch = name[0];
	int i = 1;
	for(; name[i] != ' ' && name[i] != '\t'; i++);
       	for(; name[i] == ' ' || name[i] == '\t'; i++);
	for(; name[i] != '\0'; i++)
		printf ("%c", name[i]);
	printf(", %c", ch);
}

void read_name(char *name)
{
	char ch;
	int i = 0;

	while((ch = getchar()) == ' ' || ch == '\t');
	name[i++] = ch;

	while((ch = getchar()) != '\n') {
		if(i < SIZE)
			name[i++] = ch;
	}

	name[i] = '\0';
}
