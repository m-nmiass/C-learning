#include<stdio.h>

int main()
{
	char ch;

	printf("Enter the sentence : ");
	while((ch = getchar()) != '\n'){
		if(ch >= 'A' && ch <= 'Z')
			ch = ch - 'A' + 'a';
		putchar(ch);
	}

	return 0;
}
