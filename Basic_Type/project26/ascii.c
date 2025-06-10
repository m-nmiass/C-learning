#include<stdio.h>

int main()
{
	char c = 33;

	printf("Decimal||Hexa||Character|\n");
	printf("________________________\n");

	for(; c < 127; c++){
		printf("%-7d||%-4x||%c        |\n", c, c, c);
	}
}
