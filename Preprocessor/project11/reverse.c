#include<stdio.h>

#define SIZE 100
#define is_num(ch) ((ch) >= '0' && (ch) <= '9') ? 1 : 0
#define READ(arr, max) 			\
int i = 0;				\
char ch;				\
while((ch = getchar()) != '\n')		\
	if((is_num(ch)) && i < SIZE)	\
		arr[i++] = ch;		\
	max = i
#define REV(arr, max)			\
for(int i = max - 1; i >= 0; i--)	\
	printf("%c",	arr[i])

int main()
{
	char arr[SIZE];
	int max;
	printf("Enter a number : ");
	READ(arr, max);
	printf("The reverse is : ");
	REV(arr, max);
}
