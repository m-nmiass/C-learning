#include<stdio.h>

void modify(int **p);

int main()
{
	int num;
	int *p1 = &num;
	int **p2 = &p1;

	modify(p2);

	printf("The number after the modification is : %d", **p2);
}

void modify(int **p)
{
	**p = 42;
}
