#include<stdbool.h>
#include<stdio.h>
#include<ctype.h>

#define MAX_REMIND 5
#define MAX_LEN 100

void read_string(char (*p)[MAX_LEN]);
void swap_string(char (*p)[MAX_LEN], char (*q)[MAX_LEN]);
void ft_strcpy(char *p, char *q);
void ft_swap(int *a, int *b);

int main()
{
	int day[MAX_REMIND];
	char arr[MAX_REMIND][MAX_LEN];
	int size = -1;
	bool check = true;

	printf("This program will print a one month list of daily remainder up to %d\n", MAX_REMIND);
	for(int i = 0; i < MAX_REMIND && check; i++) {
		printf("Enter day and reminder : ");
		scanf("%d", (day + i));
		getchar();
		read_string(arr + i);
		check = day[i];
		size++;
	}

	for(int i = 0; i <= size; i++) {
		for(int j = i + 1; j <= size; j++)
			if(day[j] < day[i]) {
				ft_swap(day + j, day + i);
				swap_string(arr + i, arr + j);
			}
	}

	printf("Day  Reminder\n");
	for(int i = 0; i <= size; i++) {
		printf("%d     %s\n", day[i], arr[i]);
	}
}

void read_string(char (*p)[MAX_LEN])
{
	int i = 0;
	char c;

	while ((c = getchar()) == ' ' || c == '\t');

	if (c == '\n') {
		(*p)[i] = '\0';
		return;
	}

	(*p)[i++] = c;

	while ((c = getchar()) != '\n') {
		if(i < MAX_LEN - 1)
			(*p)[i++] = c;
	}
	(*p)[i] = '\0';
}

void swap_string(char (*p)[MAX_LEN], char (*q)[MAX_LEN])
{
	char temp[MAX_LEN];
	ft_strcpy(temp, *p);
	ft_strcpy(*p, *q);
	ft_strcpy(*q, temp);
}

void ft_strcpy(char *p, char *q)
{
	int i = 0;
	while(*q != '\0') 
		*p++ = *q++;
	*p = '\0';
}

void ft_swap(int *a, int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}
