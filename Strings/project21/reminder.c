#include<stdio.h>
#include<string.h>

#define MAX_REMIND 50
#define MAX_LEN 60

void read_line(char *p);
void empty_line();
void ft_swap(int *a, int *b);

int main()
{
	char str[MAX_REMIND][MAX_LEN];
	int day[MAX_REMIND];
	int month[MAX_REMIND];
	int hour[MAX_REMIND];
	int count = 0;
	int i = 0;
	char temp[MAX_LEN];

	printf("Your input should me in a form m/d h reminder if you enter 0 the program will terminate. \n");

	while(i < MAX_REMIND){
		printf("Enter day and reminder : ");
		scanf("%d", &month[i]);
		if(month[i] == 0)
			break;
		scanf(" /%d", &day[i]);
		scanf("%d", &hour[i]);
		if(day[i] < 1 || day[i] > 31) {
			printf("Invalid date try again.\n");
			empty_line();
			continue;
		}
		if(month[i] < 1 || month[i] > 12) {
			printf("Invalid date try again.\n");
			empty_line();
			continue;
		}
		if(hour[i] < 1 || hour[i] > 23) {
			printf("Invalid hour try again.\n");
			empty_line();
			continue;
		}
		read_line(str[i]);
		i++;
		count++;
	}

	for(int i = 0; i < count; i++) {
		for(int j = i + 1; j < count; j++) {
			if (month[i] > month[j] || (month[i] == month[j] && day[i] > day[j]) || (month[i] == month[j] && day[i] == day[j] && hour[i] > hour[j])) {
                		ft_swap(&month[i], &month[j]);
                		ft_swap(&day[i], &day[j]);
               			ft_swap(&hour[i], &hour[j]);  
                		strcpy(temp, str[j]);
                                strcpy(str[j], str[i]);
                         	strcpy(str[i], temp);
            		}
		}
	}


	i = 0;

	if(count)
		printf("Mounth	DAY	Hour	Reminder\n");
	while(i < count){
		printf ("%d	%d	%d	%s\n", month[i], day[i], hour[i], str[i]);
		i++;
	}
}

void read_line(char *p)
{
	char ch;
	int i = 0;
	while((ch = getchar()) == ' ' || ch == '\t');
	*p = ch;

	while((ch = getchar()) != '\n'){
		if(i < MAX_LEN){
			p[i] = ch;
			i++;
		}
	}

	p[i] = '\0';
}

void empty_line()
{
	char ch ;
	while((ch = getchar()) != '\n');
}

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
