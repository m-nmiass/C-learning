#include"read.h"
#include"struct.h"

void read_line(char *arr)
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n') {
		if(i < MAX - 1)
			arr[i++] = ch;
	}
	arr[i] = '\0';
}
