#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
	int *p;

	printf("Enter the amount of integer you want to enter : ");
	scanf("%d", &size);

	p = (int *)malloc(size * sizeof(int));

	printf("Enter the integers : ");
	for(int i = 0; i < size; i++)
		scanf("%d", &p[i]);

	printf("\nThe integers are : ");
	for(int i = 0; i < size; i++)
		printf("%d ", p[i]);

	free(p);

	return 0;
}
