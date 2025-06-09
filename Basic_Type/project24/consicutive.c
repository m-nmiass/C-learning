#include<stdio.h>

int main()
{
	char c;
	char d = '\n';

	printf("Enter the sentence : ");

	while((c = getchar()) != '\n'){
		if(d != c){
			putchar(c);
			d = c;
		}
	}

	return 0;
}
