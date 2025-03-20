#include<stdio.h>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if(argc == 1) {
		printf ("No input.");
		return 0;
	}

	while(i < argc) {
		j = 0;
		if(argv[i][0] == '-')
			j++;
		while(argv[i][j] != '\0') {
			if(!(argv[i][j] >= '0' && argv[i][j] <= '9')) {
				printf("Invalid input.");
				return 0;
			}
			j++;
		}
		i++;
	}

	printf("All arguments are valid integers.");
}
