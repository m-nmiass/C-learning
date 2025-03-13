#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

void read_input(char arr[]);
int ft_strlen(char arr[]);
char ft_toupper(char c);
char ft_tolower(char c);
void upper_string(char arr[], int size);
void lower_string(char arr[], int size);

int main()
{
	char arr[SIZE];
	char choice ;

	printf("Enter string of characters up to %d : ", SIZE);
	read_input(arr);
	
	int size = ft_strlen(arr);

	printf("Pick the conversion type.\n1-Uppercase.\n2-Lowercase.\n");
	do{
		printf("Your choice : ");
		scanf("%c", &choice);
		if(choice != '1' && choice != '2')
			printf ("Invalid input try again\n");
	}while(choice != '1' && choice != '2');

	while(getchar() != '\n');

	if(choice == '1')
		upper_string(arr, size);
	else
		lower_string(arr, size);
	
	printf("The string is : %s", arr);
}

void read_input(char arr[])
{
	int i = 0;
	while((arr[i] = getchar()) != '\n' && i < SIZE - 1) i++;
	arr[i] = '\0';
}

int ft_strlen(char arr[])
{
	int i = 0;
	for(; arr[i] != '\0'; i++);
	return i;
}

char ft_toupper(char c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 'a' + 'A');
	return c;
}

char ft_tolower(char c)
{
	if(c >= 'A' && c <= 'Z')
		return(c - 'A' + 'a');
	return c;
}

void upper_string(char arr[], int size)
{
	for(int i = 0; i < size; i++)
		arr[i] = ft_toupper(arr[i]);
}

void lower_string(char arr[], int size)
{
	for(int i = 0; i < size; i++)
		arr[i] = ft_tolower(arr[i]);
}
