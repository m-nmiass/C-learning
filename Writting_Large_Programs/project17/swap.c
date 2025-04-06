#include"swap.h"

char str[LEN];

void read_line()
{
	char ch;
	int i = 0;

	while((ch = getchar()) != '\n') {
		if(i < LEN)
			str[i++] = ch;
		//printf("\ni is %d char is %c\n", i - 1, ch);
	}
	str[i] = '\0';
	//printf("\nsize i is : %d\n", i);
}

void print_line()
{
	int i = strlen(str) - 1;
	//printf("size is %d, i is %d", strlen(str), i);
	int k;
	int j = 0;

	for(; str[i] != ' '; i--);
	k = i ;

	for(; k < strlen(str); k++)
		printf("%c", str[k]);

	for(; str[j] != ' '; j++);

	k = j ;

	for(; k < i; k++)
		printf("%c", str[k]);

	printf(" ");
	for(k = 0; k < j; k++)
		printf("%c", str[k]);
}
