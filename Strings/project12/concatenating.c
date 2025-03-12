#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

void read_string(char (*arr)[SIZE]);
void ft_strcat(char *s1, char (*s2)[SIZE]);
void print_string(char *arr);

int main()
{
	char arr[3][SIZE];
	char merge[SIZE*3] = "\0";
	for(int i = 0; i < 3; i++){
		read_string(&arr[i]);
		ft_strcat(merge, &arr[i]);
	}
	
	print_string(merge);
}

void read_string(char (*arr)[SIZE])
{
	printf ("Enter a string up to %d character : ", SIZE);
	int i = 0;
	char c;
	while((c = getchar()) != '\n' && i < SIZE)
		(*arr)[i++] = c;
	(*arr)[i] = '\0';
}

void ft_strcat(char *s1, char (*s2)[SIZE])
{
	while(*s1 != '\0') s1++;
	int i = 0;
	while((*s2)[i] != '\0') {
		*s1++ = (*s2)[i];
		i++;
	}
	*s1 = '\0';
}

void print_string(char *arr)
{
	printf ("The string is : %s", arr);
}
