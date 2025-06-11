#include<stdio.h>

int main()
{
	char c;
	char b;
	int max = 0;
	char digit;
	int current = 0;

	printf("Enter the sequence of digits : ");

	while((c = getchar()) != '\n'){
		if (c != b){
			if(current > max){
				max = current;
				current = 0;
		 		digit = b;
			}
			b = c;
		}
		if (c == b && (c >= '0' && c <= '9'))
			current++;
	}

	printf("The longest sequence have character %c repeated %d", digit, max);
	return 0;
}
