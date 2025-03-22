#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(int argc, char **argv)
{
	int size_short = INT_MAX;
	int size_long = 0;
	int shortest = 0;
	int longest = 0;

	for(int i = 1; i < argc; i++) {
		if(size_short > strlen(argv[i])) {
			size_short = strlen(argv[i]);
			shortest = i;
		}
		if(size_long < strlen(argv[i])) {
			size_long = strlen(argv[i]);
			longest = i;
		}
	}

	if(argc > 1) {
		printf("The smallest : %s\n", argv[shortest]);
		printf("The longest : %s", argv[longest]);
	}
}
