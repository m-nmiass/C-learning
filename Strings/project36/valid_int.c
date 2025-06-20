#include<stdio.h>
#include<stdbool.h>

bool valid_int(char *s1);
bool is_digit(char c);

int main(int argc, char *argv[])
{
	for(int i = 1; i < argc; i++){
		if(valid_int(argv[i]))
			printf("%s : valid integer\n", argv[i]);
		else
			printf("%s : invalid integer\n", argv[i]);
	}

	return 0;
}

bool valid_int(char *s1)
{
	while(*s1)
		if(!is_digit(*s1++))
			return false;	
	
	return *s1 == '\0';
}

bool is_digit(char c)
{
	return c >= '0' && c <= '9';
}
