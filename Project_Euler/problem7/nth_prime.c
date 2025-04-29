#include<stdio.h>

int main()
{
	int rank;
	unsigned long int prime = 3;
	printf("Enter the number : ");
	scanf("%d", &rank);
	
	for(int count = 1; count < rank; count++){
		for(int i = prime - 1; i > 1; i--){
			if(prime % i == 0){
				prime++;
				i = prime;
			}
		}
		if(count + 1 < rank)
			prime++;
	}

	printf("The prime number is %lu", prime);
}
