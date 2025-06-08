#include<stdio.h>

int main()
{
	int num;
	int i, j, k;

	printf("Enter a number : ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++){
		for(j = 1; j <= num - i; j++)
			printf(" ");
		for(k = 1; k <= i*2 - 1; k++)
			printf("*");
		printf("\n");
	}

	for(i = 1; i <= num -1; i++){
		for(j = 1; j <= i; j++)
			printf(" ");
		for(k = 1; k <= 2*(num - i) -1; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}
