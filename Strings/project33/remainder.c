#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define MAX_MSG (60+3)
#define MAX_REMIND (100+1)

void print_string(char (*p)[MAX_MSG], int len);
void swap_strings(char (*p)[MAX_MSG], int len);
void swap(char *a, char *b);
void read_string(char *str);

int main()
{
	char str[MAX_REMIND][MAX_MSG];
	int day;
	int i = 0;

	for(; i < MAX_REMIND; i++){
		printf("Enter day and reminder : ");
		scanf("%2d", &day);
		if(day == 0)
			break;
		sprintf(str[i], "%2d", day);
		read_string(str[i]);
	}
	swap_strings(str, i);
	print_string(str, i);
}

void read_string(char *str)
{
	char str2[MAX_MSG];
	char ch;
	int i = 0;

	while((ch = getchar()) != '\n')
		if(i < MAX_MSG - 3)
			str2[i++] = ch;
	str2[i] = '\0';

	strcat(str, str2);
}

void print_string(char (*p)[MAX_MSG], int len)
{
	for(int i = 0; i < len; i++)
		printf("%s\n", p[i]);
}

void swap_strings(char (*p)[MAX_MSG], int len)
{

	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len - 1; j++){
			if(strcmp(p[i], p[j]) > 0)
				swap(p[i], p[j]);
		}
	}
}

void swap(char *a, char *b)
{
	char temp[MAX_MSG];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
