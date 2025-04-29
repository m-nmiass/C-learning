#include<stdio.h>
#include<stdbool.h>

bool is_palindrom(long int num);

int main()
{
	long int max = 0;
	int num1 = 1;
	int num2 = 1;
	long int mul;
	for(; num1 < 1000; num1++){
		for(; num2 < 1000; num2++){
			mul = num1 * num2;
			if(is_palindrom(mul) && mul > max)
				max = mul;
		}
		num2 = 1;
	}

	printf("The largest palindrom made of 2 product number of 3 digits is : %ld", max);
}

bool is_palindrom(long int num)
{
	long int ori = num;
	long int reverse = 0;
	while(num){
		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}
	return reverse == ori;
}
