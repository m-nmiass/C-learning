#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

void read_string(char arr[]);
int word_count(char arr[], int size);
int ft_strlen(char arr[]);
bool is_space(char c);

int main()
{
	char arr[SIZE];
	
	printf("Enter the string up to %d : ", SIZE);
	read_string(arr);

	int count = word_count(arr, ft_strlen(arr));

	printf ("The number of words is : %d", count);
}

bool is_space(char c)
{
	return((c >= 9 && c <= 13) || c == 32);
}

void read_string(char arr[])
{
	int i = 0;
	while((arr[i] = getchar()) != '\n' && i < SIZE - 1)
		i++;
	arr[i] = '\0';
}

int ft_strlen(char arr[])
{
	int i = 0;
	for(; arr[i] != '\0'; i++);
	return i;
}

int word_count(char arr[], int size)
{
	int count = 0;
	bool in_word = false;

	for(int i = 0; i < size; i++){
		if(!is_space(arr[i])){
			if(!in_word) {
				count++;
				in_word = true;
			}
		}
		else
			in_word = false;
	}
	return count;
}

