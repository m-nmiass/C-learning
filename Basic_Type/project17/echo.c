#include<stdio.h>

int main()
{
	char ch;
	
	printf("The program will echo every input executed when you enter q\n");
	while((ch = getchar()) != 'q' && ch != 'Q')
		putchar(ch);
}
