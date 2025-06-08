#include<stdio.h>

int main()
{
	char c;
	int sum = 0;

	printf("Enter the number : ");
	for(;;){
		scanf("%c", &c);
		if(c == '\n')
			break;
		if(c >= '0' && c <= '9')
			sum += (c - '0');
	}

	printf("The sum of digits is : %d", sum);

	return 0;
}


