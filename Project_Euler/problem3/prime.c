#include<stdio.h>

int main()
{
	int prime = 10;
	scanf("%d", &prime);
        int i = prime - 1;
        while(i > 1){
                if(prime % i == 0){
                        (prime)++;
                        i = prime;
                }
               i--;
       }
	printf("nest prime is %d", prime);
}
