#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void read_line(char *str);
int ft_strlen(char *str);
char* concat(char *str1, char *str2);

int main()
{
	char *str1 = malloc(10);
	char *str2 = malloc(10);

	printf("Enter the first string : ");
	read_line(str1);
	printf("%s is the first string", str1);
	printf("\nEnter The second string : ");
	read_line(str2);
	printf("%s is the second string", str2);
	printf("\nThe concat string is : %s", concat(str1, str2));
}

void read_line(char *str)
{
	int i = 0;
	char ch;
	while((ch = getchar()) != '\n'){
		if(i < 9)
			str[i++] = ch;
		else{
			str = realloc(str, i + 1);
			str[i++] = ch;
		}
	}
	str[i] = '\0';
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

char * concat(char *str1, char *str2)
{
	char *str = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	str[0] = '\0';

	strcat(str, str1);
	strcat(str, str2);

	return str;
}
