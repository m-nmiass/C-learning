#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define SIZE 100

bool ft_strcmp (char *s1, char *s2);
void read_string(char *arr);
int ft_strlen(char arr[]);

int main()
{
	char arr[SIZE];
	read_string(arr);
	char *p = arr + ft_strlen(arr) - 1;
	if(ft_strcmp(arr, p))
		printf("The string is palindrom");
	else
		printf("The string is not palindrom");
}

void read_string(char *arr)
{
	char c;
	char *p = arr ;
	printf ("Enter the string up to %d characters : ", SIZE);
	while((c = getchar()) != '\n' && p < arr + SIZE) {
		if (isalnum(c))
			*p++ = tolower(c);
	}
	*p ='\0';
}

int ft_strlen(char arr[])
{
	int i = 0;
	for(; arr[i] != '\0'; i++);
	return i;
}

bool ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
		if(*s1++ != *s2--)
			return 0;
	return 1;
}
