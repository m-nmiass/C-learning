#include<stdio.h>

int main()
{
	char ch;
	int count = 0;
	int size = 1;

	printf("Enter the sentence : ");
	while((ch = getchar()) != '\n'){
		if(ch != ' ')
			count++;
	}

	while(size < count)
		size *= 10;

	size /= 10;

	printf("The amount of non space character is : ");

	while(count){
		putchar((count/size) + '0');
		count %= size;
		size /= 10;
	}

	return 0;
}
