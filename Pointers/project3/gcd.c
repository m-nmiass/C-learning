#include <stdio.h>
#include <stdbool.h>

void reduce(int numinator, int denominator, int *reduced_numerator, int *reduced_denominator);
bool bigger(int numinator, int denominator);
void ft_swap(int *num1, int *num2);
int gcd(int numinator, int denominator);

int main()
{
	int numinator, denominator, reduced_numerator, reduced_denominator ;

	printf ("Enter a fraction : ");
	scanf ("%d / %d", &numinator, &denominator);

	reduce(numinator, denominator, &reduced_numerator, &reduced_denominator);

	printf ("In lowest term %d/%d", reduced_numerator, reduced_denominator);
}

bool bigger(int numinator, int denominator)
{
	return numinator > denominator;
}

void ft_swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int gcd (int numinator, int denominator)
{
	int temp ;

	if (!bigger(numinator, denominator))
		ft_swap(&numinator, &denominator);

	while (denominator)
	{
		temp = numinator ;
		numinator = denominator ;
		denominator = temp % denominator ;
	}
	return numinator ;
}

void reduce(int numinator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int gcdd ;
	
	gcdd = gcd(numinator, denominator);
	
	*reduced_numerator = numinator/gcdd ;
	*reduced_denominator = denominator/gcdd ;
}


