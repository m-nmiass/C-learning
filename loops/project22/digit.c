#include<stdio.h>

int main()
{
	int digit;
	int divis = 0;
	char c;

	printf("Enter a number : ");

	for(;;){
		scanf("%c", &c);
		if(c == '\n')
			break;
		if(c >= '0' && c <= '9'){
			digit = c - '0';
			if(digit % 3 == 0)
				divis++;
		}
	}

	printf("The number of digits divisible by 3 are %d", divis);

	return 0;
}
