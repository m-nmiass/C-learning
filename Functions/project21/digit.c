#include<stdio.h>
#include<stdbool.h>

bool count_even(int n);
bool count_odd(int n);
bool count_div3(int n);
bool count_zeros(int n);

int main()
{
	char c;
	int even = 0;
	int odd = 0;
	int div3 = 0;
	int zeros = 0;

	printf("Enter a numbre : ");
	while((c = getchar()) != '\n'){
		if(c >= '0' && c <= '9'){
			if(count_even(c - '0'))
				even++;
			if(count_odd(c - '0'))
				odd++;
			if(count_div3(c - '0'))
				div3++;
			if(count_zeros(c - '0'))
				zeros++;
		}
	}

	printf("Evens : %d\n", even);
	printf("Odds : %d\n", odd);
	printf("divisible by 3 : %d\n", div3);
	printf("Zeros : %d", zeros);

	return 0;
}

bool count_even(int n)
{
	return (n % 2 == 0);
}

bool count_odd(int n)
{
	return (n % 2 != 0);
}

bool count_div3(int n)
{
	return (n % 3 == 0);
}

bool count_zeros(int n)
{
	return (n == 0);
}
