#include <stdio.h>

#define N 1000

int a[N];

int user_input(int *k);
void rotation();
void print_array(int i);
void ft_swap(int *a, int *b);
void array_swap(int i, int k);
void reverse (int i, int j);

int main()
{
	rotation();
}

void rotation()
{
	int k ;
	int i = user_input(&k);
	array_swap(i, k);
	print_array(i);
}

int user_input(int *k)
{
	char c ;
	int i = 0 ;

	printf ("Enter digits up to 1000 digit : ");
	while ((c = getchar()) != '\n' && i < N)
	{
		if (c >= '0' && c <= '9')
		{
			a[i] = c - '0';
			i++;
			//printf ("%d\n", i);
		}
	}
	
	do
	{
		printf ("Enter the rotation num : ");
		scanf ("%d", k);
		if (*k < 0)
			printf ("Invalid rotation num try again.\n");
	}while (*k < 0);

	*k = *k % i ;
	
	return i ;
}

void print_array(int i)
{
	int j = 0 ;
	while (j < i)
		printf ("%d ",a[j++]);
}

void array_swap(int i, int k)
{
	reverse (0 , k - 1);
	reverse (k, i - 1);
	reverse (0, i - 1);
}

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse (int i, int j)
{
	while (i < j)
	{
		ft_swap(&a[i], &a[j]);
		i++ ;
		j-- ;
	}
}
