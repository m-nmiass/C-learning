#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

int check[128] = {0};

int read_input(char arr[]);
void string_check(char arr[], int size);
void output();

int main()
{
	char arr[SIZE];
	printf("Enter the string up to %d character : ", SIZE);
	int size = read_input(arr);
	string_check(arr, size);
	output();
}

int read_input(char arr[])
{
	int i = 0;
	while((arr[i] = getchar()) != '\n' && i < SIZE - 1) i++;
	arr[i] = '\0';
	return i;
}

void string_check(char arr[], int size)
{
	for(int i = 0; i < size; i++)
		check[arr[i]]++;
}

void output()
{
	for(int i = 0; i < 128; i++)
		if(check[i])
			printf("%c%d", i, check[i]);
}
