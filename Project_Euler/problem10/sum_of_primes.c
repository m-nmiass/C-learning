#include<stdio.h>

int next_prime(int prime)
{
	prime++;
	for(int i = prime - 1; i > 1;i--){
		if(prime % i == 0){
			prime++;
			i = prime;
		}
	}
	return prime;
}

int main()
{
	unsigned long int num;
	unsigned long int sum = 1;
	printf("Enter the max number : ");
	scanf("%lu", &num);

	for(int prime = 2; prime <= num;){
		sum += prime;
		printf("sum is %lu prime is %d\n", sum, prime);
		prime = next_prime(prime);
	}
	
	sum--;

	printf("The sum of all numbers up to %lu is %lu", num, sum);
}
