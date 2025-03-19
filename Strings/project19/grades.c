#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

#define MAX_GRADES 100
#define MAX_NAME 100

char str[MAX_GRADES][MAX_NAME];
int grade[MAX_GRADES];

int read_lines();
void ft_swap(int *a, int *b);
void ft_swap_string(char *str1, char *str2);
void read_name(int place);

int main()
{
	int count = read_lines();
	
	for(int i = 0; i < count; i++) {
		for(int j = i + 1; j < count; j++) {
			if (grade[i] < grade[j]){
				ft_swap(grade + i, grade + j);
				ft_swap_string(str[i], str[j]);
			}
		}
	}

	printf("Grade		Student Name\n");
	for(int i = 0; i < count; i++){
		printf ("%d		%s\n", grade[i], str[i]);
	}
}

int read_lines()
{
	int i = 0;
	do {
		printf("Enter the grade and student name -1 to terminate: ");
		scanf("%d", grade+i);
		if(grade[i] == -1)
			break;
		if(grade[i] < 0 || grade[i] > 100) {
			grade[i] = 1;
			printf ("Invalid grade try again \n");
		}
		else {
			read_name(i);
			i++;
		}
		
	}while(i < MAX_GRADES);
	return i;
}

void read_name(int place)
{
	char ch;
	int i = 1;
	while((ch = getchar ()) == ' ' || ch == '\t');
	ch = toupper(ch);
	str[place][0] = ch;

	while((ch = getchar()) != '\n'){
		if (i < MAX_NAME)
			str[place][i++] = ch;
	}

	str[place][i] = '\0';
}

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ft_swap_string(char *str1, char *str2)
{
	char temp[MAX_NAME] ;
	strcat(temp, str1);
	strcat(str1, str2);
	strcat(str2, temp);
}
