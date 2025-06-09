#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter the sentence : ");
	while((c = getchar()) != '\n'){
		if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
			putchar(c);
	}

	return 0;
}

