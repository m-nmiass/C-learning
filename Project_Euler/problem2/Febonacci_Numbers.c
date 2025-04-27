#include<stdio.h>
#include<stdbool.h>

int Fibunacci_sum(int num, int even, int odd);

int main()
{
	int num;
	int sum;
	int even;
	int odd;

	printf("Enter the max fibonacci number : ");
	scanf("%d", &num);

	printf("///1 : true	0 : false///\n");
	printf("Do you want the sum to include even numbers : ");
	scanf("%d", &even);
	printf("Do you want the sum to include odd numbers : ");
	scanf("%d", &odd);

	sum = Fibunacci_sum(num, even, odd);

	printf("The sum of all Fibonacci numbers is : %d", sum);

	return 0;
}

int Fibunacci_sum(int num, int even, int odd)
{
	int sum = 0;
	int num1 = 1;
	int num2 = 1;
	int temp;
	for(; num2 < num;){
		if((num2 % 2 == 0) && even)
			sum += num2;
		if((num2 % 2 != 0) && odd)
			sum += num2;
		temp = num1;
		num1 = num2;
		num2 += temp;
	}

	return sum;
}
