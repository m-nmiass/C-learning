#include<stdio.h>

int main()
{
	char c;

	printf("Enter the sentence : ");
	while((c = getchar()) != '\n'){
		if(c >= '0' && c <= '9')
			c = '*';
		putchar(c);
	}

	return 0;
}
