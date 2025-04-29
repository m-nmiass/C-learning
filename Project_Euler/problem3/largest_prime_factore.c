#include<stdio.h>

void next_prime(unsigned int *prime);
void biggest_prime(unsigned long int *num);

int main()
{
	unsigned long int num;
	printf("Enter the number : ");
	scanf("%lu", &num);
	printf("%lu", num);
	biggest_prime(&num);
}

void next_prime(unsigned int *prime)
{
	unsigned int i = *prime - 1;
	while(1){
		if(i == 1)
			return;
		if(*prime % i == 0){
			(*prime)++;
			i = *prime - 1;
		}
		else
			i--;
	}
}

void biggest_prime(unsigned long int *num)
{
	unsigned int max = 0;
	unsigned int prime = 2;
	for(;;){
		if(prime > *num || *num == 1){
			if(max < *num)
				max = *num;
			printf("The largest prime number is : %lu", max);
			return;
		}

		if(*num % prime == 0){
			*num /= prime;
			if(max < prime)
				max = prime;
			prime = 2;
		}
		else{
			prime++;
			next_prime(&prime);
		}
	}
}
