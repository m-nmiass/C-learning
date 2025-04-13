#include<stdio.h>

int main()
{
	int i = 0;
	int max = sizeof(int);
	int num;
	int *p = &num;
	int value;

	printf("Enter the number : ");
	scanf("%d", &num);
	
	printf("The casting is\n");

	char *q = (char *)p;
	for(; i < max; i++){
		printf("The byte : %d have the value : %d\n", i + 1, *(q + i));
	}
}
