#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	for(int i = 1; i < argc; i++) {
		for(int j = strlen(argv[i]) - 1; j >= 0; j--) {
			printf("%c", argv[i][j]);
		}
		printf("\n");
	}
}
