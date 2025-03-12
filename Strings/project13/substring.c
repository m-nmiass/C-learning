#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

void read_string(char arr[]);
int ft_strlen(char arr[]);
bool ft_strcmp(char s1[], char s2[]);
char ft_tolower(char ch);
bool ft_islnum(char ch);

int main()
{
	char main_string[SIZE];
	char substring[SIZE];

	printf("Enter the main string : ");
	read_string(main_string);

	printf("Enter the substring : ");
	read_string(substring);

	if(ft_strlen(main_string) < ft_strlen(substring)) {
		printf ("%s is not a substring for %s", substring, main_string);
		return 0 ;
	}

	for(int i = 0; i < SIZE && main_string[i]; i++) {
		if (ft_strcmp(main_string + i, substring)) {
			printf("%s is a substring for %s", substring, main_string);
			return 0 ;
		}
	}

	printf("%s is not a substring for %s", substring, main_string);
}

void read_string(char arr[])
{
	char c ;
	int i = 0;
	while ((c = getchar()) != '\n' && i < SIZE - 1)
		if(ft_islnum(c)) {
			arr[i] = c;
			i++;
		}
	arr[i] = '\0';
}

char ft_tolower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 'a';
	else
		return ch;
}

bool ft_islnum(char ch)
{
	return((ft_tolower(ch) >= 'a' && ft_tolower(ch) <= 'z') || (ft_tolower(ch) >= '0' && ft_tolower(ch) <= '9'));
}

bool ft_strcmp(char s1[], char s2[])
{
	int i = 0;
	while(s2[i] != '\0') {
		if (ft_tolower(s1[i]) != ft_tolower(s2[i]))
			return 0;
		else
			i++ ;
	}
	return 1;
}

int ft_strlen(char arr[])
{
	int i = 0;
	while(arr[i] != '\0')
		i++;
	return i;
}
