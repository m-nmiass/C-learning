#include<stdio.h>

int sum_of_multiples(int *num);

int main()
{
	int num;
	int sum;

	printf("Enter The number : ");
	scanf("%d", &num);

	sum = sum_of_multiples(&num);

	printf("The sum of all multiples bellow %d of 3 and 5 is : %d", num, sum);

	return 0;
}

int sum_of_multiples(int *num)
{
	printf("Numbers that are multiples of 3 and 5 are : ");
	int sum = 0;
	for(int i = 1; i <= *num; i++){
		if((i % 3 == 0) || (i % 5 == 0)){
			sum += i;
			printf("%d ", i);
		}
	}
	printf("\n");
	return sum;
}
