#include<stdio.h>

#define N 100

int ft_strlen(char arr[]);
void ft_strrev(char arr[], int size);
void read_arr(char *arr);
void ft_swap(char *a, char *b);
void print_arr(char *arr);

int main()
{
	char arr[N];
	printf ("Enter the string up to 100 character : ");
	read_arr(arr);
	ft_strrev(arr, ft_strlen(arr) - 1);
	print_arr(arr);
}

void read_arr(char *arr)
{
	char *p = arr;
	while((*arr = getchar()) != '\n' && arr < p + N)
		arr++;
	*arr = '\0';
}

int ft_strlen(char arr[])
{
	int i = 0;
	while(arr[i] != '\0')
		i++;
	return i;
}

void ft_strrev(char arr[], int size)
{
	for(int j = 0; j < size; j++, size--)
		ft_swap(&arr[j], &arr[size]);
}

void ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void print_arr(char *arr)
{
	printf ("The reversed array is : ");
	for(;*arr != '\0'; arr++)
		printf("%c", *arr);
}
