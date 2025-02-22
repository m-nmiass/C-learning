#include <stdio.h>
#include <stdbool.h>

#define N 5

int a[N];

void input_user(int *target);
bool sum(int a, int b, int target);
void two_sum();
void check(int max, int target);
int array_sorting(int target);
void output_user(int a, int b);
void ft_swap (int *a, int *b);

int main()
{
	two_sum();
}

void two_sum()
{
	int target ;
	input_user(&target);
	int max = array_sorting(target);
	check(max, target);
}

void input_user(int *target)
{
	char c ;
	int i = 0 ;
	printf ("Enter 5 digits : ");

	while ((c = getchar()) != '\n')
	{
		if (c >= '0' && c <= '9' && i < N)
		{
			a[i] = c - '0' ;
			i++;
		}
	}


	printf ("Enter the target integer : ");
	scanf ("%d", target);
}

int array_sorting(int target)
{
	int i = 0;
	int j = 1;

	while (i < N)
	{
		if (j >= N)
			i++, j = i + 1;
		if (a[i] > target)
			return i ;
		if (a[i] > a[j])
			ft_swap(&a[i], &a[j]);
		j++;

	}
	return N ;
}

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void check (int max, int target)
{
	int i = 0;
	int j = 1;

	while (i < max)
	{
		if (sum(a[i], a[j], target))
		{
			output_user(a[i], a[j]);
			return ;
		}
		if (j >= N)
		{
			i++;
			j = i + 1;
		}
		j++;
	}
	printf ("There is no sum up to the target number %d", target);
}

void output_user(int a, int b)
{
	printf("the two numbers are %d + %d", a, b);
}

bool sum (int a, int b, int target)
{
	return (a + b == target);
}
