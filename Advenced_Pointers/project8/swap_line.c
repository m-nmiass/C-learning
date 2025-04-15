#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int size;
	char *p;

	printf("Enter the string size : ");
	scanf("%d", &size);
	getchar();

	p = (char *)malloc(size * sizeof(char));

	printf("Enter the string :");

	for(int i = 0; i < size; i++)
		p[i] = getchar();

	printf("The reverse strng is : ");
	for(int i = size - 1; i >= 0; i--)
		printf("%c", p[i]);
	
	free(p);

	return 0;
}
