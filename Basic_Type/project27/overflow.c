#include<stdio.h>

int main()
{
	char c;
	int count = 0;
	int num;

	printf("Enter digits : ");
	while((c = getchar()) != '\n'){
		if(c >= '0' && c <= '9'){
			num = c - '0';
			if(num * 30 > 127)
				count++;
		}
	}

	printf("The numbers that accure overflows are : %d", count);
}
