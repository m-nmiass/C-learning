#include<stdio.h>

#define SIZE 20

int ft_strlen(char *str);
void read_line(char *str);
void ft_strcpy(char *src, char *dest);

int main()
{
	char str[SIZE];
	char largest[SIZE];
	char smallest[SIZE];
	int size_str = 0;
	int size_long = 0;
	int size_short = SIZE + 1;

	printf ("The program will terminate when you enter 4 words.\n");

	do{
		printf("Enter word : ");
		read_line(str);
		size_str = ft_strlen(str);
		if(size_str > size_long) {
			ft_strcpy(largest, str);
			size_long = size_str;
		}
		if(size_str < size_short) {
			ft_strcpy(smallest, str);
			size_short = size_str;
		}
		if(size_str == 4)
			break;
	}while(1);

	printf("Smallest word : %s\n", smallest);
	printf("largest word : %s", largest);
}

int ft_strlen(char *str)
{
	char len = 0;
	while(*str++) len++;
	return len;
}

void ft_strcpy(char *dest, char *src)
{
	while (*src && (*dest++ = *src++));
	*dest = '\0';
}

void read_line(char *str)
{
	int i = 1;
	char ch ;
	while((ch = getchar()) == ' ' || ch == '\t');
	*str = ch;

	while((ch = getchar()) != '\n'){
		if(i < SIZE)
			*(str + i) = ch;
		i++;
	}

	*(str + i) = '\0';
}
