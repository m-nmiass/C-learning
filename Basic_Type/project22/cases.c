#include<stdio.h>
#include<ctype.h>

int main()
{
	char c;

	printf("Enter the sentence : ");
	while((c = getchar()) != '\n'){
		if(isupper(c))
			c = tolower(c);
		else if(islower(c))
			c = toupper(c);
		putchar(c);
	}

	return 0;
}
