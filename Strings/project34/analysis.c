#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define SIZE (60+1)

bool is_upper(char c);
bool is_lower(char c);
bool is_digit(char c);
bool is_space(char c);
void read_string(char *p);
void count_string(char *p);
void reverse_string(char *p);
char to_upper(char *c);
char to_lower(char *c);
void upper_string(char *p);
void lower_string(char *p);

int main()
{
	char str[SIZE];

	printf("Enter the string : ");
	read_string(str);

	count_string(str);
	reverse_string(str);
	upper_string(str);
	lower_string(str);

	return 0;
}

bool is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

bool is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

bool is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

bool is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

void read_string(char *p)
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n')
		if(i < SIZE)
			p[i++] = ch;
	p[i] = '\0';
}

void count_string(char *p)
{
	char ch;
	int upper = 0;
	int lower = 0;
	int space = 0;
	int digit = 0;
	int other = 0;

	for(; *p != '\0'; p++){
		if(is_upper(*p))
			upper++;
		else if(is_lower(*p))
			lower++;
		else if(is_digit(*p))
			digit++;
		else if(is_space(*p))
			space++;
		else
			other++;
	}

	printf("Digits : %d\n", digit);
	printf("Upper cases : %d\n", upper);
	printf("Lower cases : %d\n", lower);
	printf("Spaces : %d\n", space);
	printf("Other Characters : %d\n", other);
}

void reverse_string(char *p)
{
	printf("The reversed string : ");
	for(int i = strlen(p); i >= 0; i--)
		printf("%c", p[i]);
	printf("\n");
}

char to_upper(char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';
	return *c;
}

char to_lower(char *c)
{
	if(*c >= 'A' && *c <= 'Z')
		*c = *c - 'A' + 'a';
	return *c;
}

void upper_string(char *p)
{
	printf("The string in upper cases : ");
	while(*p != '\0'){
		to_upper(p++);
		printf("%c", *p);
	}
	printf("\n");
}

void lower_string(char *p)
{
	printf("The string is lower cases : ");
	while(*p != '\0'){
		to_upper(p++);
		printf("%c", *p);
	}
	printf("\n");
}
