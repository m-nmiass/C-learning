#include"reverse.h"

char sentence[LEN];

int read_line()
{
	int count = 0;
	char ch;
	while((ch = getchar()) != '\n'){
		if(count < LEN)
			sentence[count++] = ch;
	}
	return count;
}

void print_swap(int len)
{
	for(int i = len - 1, j = len - 1, k; i >= 0; i--) {
		if(sentence[i] == ' ' || sentence[i] == '\t') {
			k = i - 1;
			i++;
			for(;i <= j; i++) 
				printf("%c", sentence[i]);
			printf(" ");
			i = k;
			j = k;
		}
		if(i == 0){
			for(; i <= j; i++)
				printf("%c", sentence[i]);
			break;
		}
	}
}
