#include<stdio.h>
#include<stdbool.h>

bool is_upper(char c);

int main(int argc, char *argv[])
{
	int upper = 0;
	for(int i = 0; i < argc; i++){
		for(int j = 0; argv[i][j]; j++){
			if(is_upper(argv[i][j]))
				upper++;
		}
	}

	printf ("Upper cases in arguments is %d", upper);
}

bool is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}
