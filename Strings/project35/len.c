#include<stdio.h>

size_t c_strlen(char *s1);

int main(int argc, char *argv[])
{
	unsigned int max = 0;
	int biggest;

	for(int i = 1; i < argc; i++){
		if(c_strlen(argv[i]) > max){
			max = c_strlen(argv[i]);
			biggest = i;
		}
	}

	printf("The longest string is %s", argv[biggest]);
}

size_t c_strlen(char *s1)
{
	char *p = s1;
	while(*s1++);
	return s1 - p;
}
