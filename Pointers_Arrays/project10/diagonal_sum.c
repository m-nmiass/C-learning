#include <stdio.h>

int main()
{
	int a[4][4];
	int sum = 0 ;

	printf ("Enter 16 integers : ");
	for(int *p = a[0]; p < a[3] + 4; p++)
		scanf ("%d", p);

	for(int (*p)[4] = &a[0], i = 0; p <= &a[3]; p++, i++)
		sum += (*p)[i];

	printf ("The diagonal sum is : %d", sum);
}
