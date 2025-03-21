#include<stdio.h>

int main()
{
	char *digits[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	char *tens[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
	char *eleven[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	int num ;

	printf("Enter a number : ");
	scanf("%d", &num);

	if(num < 0 || num > 99)
		printf("Invalid number");

	else if(num < 10)
		printf("The number is %s", digits[num]);
	else if(num < 20)
		printf("The number is %s", eleven[num - 11]);
	else if(num < 100) {
		printf("The number is %s", tens[num / 10 - 2]);
		if(num % 10)
			printf("-%s", digits[num % 10]);
	}
}
