#include<stdio.h>

#define CREATE_VAR(type, name) type var_##name

int main()
{
	CREATE_VAR(int, a) = 6;
	printf ("a = %d", var_a);
}
