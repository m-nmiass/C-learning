#include<stdio.h>

#define MAX_GENERIC(type) \
type max_##type(type x, type y) \
{				\
	return x > y ? x : y ;  \
}				

MAX_GENERIC(int);

int main()
{
	int a = 7;
	int b = 8;
	MAX_GENERIC(int);
	printf("Max is : %d", max_int(a, b));
}
