#include<stdio.h>

int main(int argc, char **argv)
{
	int sum = 0;
	for(int i = 1; i < argc; i++){
		for(int j = 0; argv[i][j]; j++){
			if(argv[i][j] >= '0' && argv[i][j] <= '9')
				sum += argv[i][j] - '0';
		}
	}

	printf ("The sum is %d", sum);
}
