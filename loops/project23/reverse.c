#include<stdio.h>

int main()
{
	char digit;
	int num = 0;

	printf("Enter a number : ");

	for(int i = 1 ; ;){
		scanf("%c", &digit);
		if(digit == '\n')
			break;
		if(digit >= '0' && digit <='9'){
			num = num + (digit - '0')*i;
			i *= 10;
		}
	}

	printf("The number in reverse is : %d", num);

	return 0;
}
