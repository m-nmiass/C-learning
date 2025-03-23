#include <stdio.h>

#define swap(*i, *j) int x = *i; \
		     *i = *j;    \ 
		     *j = x ;    \

int main()
{
	int i = 1;
	int j = 2;
	swap (&i, &j);
	printf ("i is %d, j is %d", i, j);
}

