#include<stdio.h>
#include<stdbool.h>

int main()
{
	int upper = 0;
	int lower = 0;
	int digit = 0;
	int whitespace = 0;
	int others = 0;
	char c;

	printf("Enter the sentences : ");
	while(((c = getchar()) != '\n') || c == EOF){
		if(c >= 'a' && c <= 'z')
			lower++;
		else if(c >= 'A' && c <= 'Z')
			upper++;
		else if(c >= '0' && c <= '9')
			digit++;
		else if((c >= 9 && c <= 13) || c == 32)
			whitespace++;
		else
			others++;
	}

	printf("Uppercase : %d\n", upper);
	printf("Lowercase : %d\n", lower);
	printf("Digits    : %d\n", digit);
	printf("Whitespace: %d\n", whitespace);
	printf("Others    : %d\n", others);

	return 0;
}
