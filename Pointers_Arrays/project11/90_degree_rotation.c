#include <stdio.h>

int main()
{
	int a[4][4];
	int b[4][4];
	int count = 0 ;

	printf ("Enter 16 integer : ");
	for (int *p = a[0]; p < a[3] + 4; p++)
		scanf("%d", p);

	for (int (*q)[4] = &b[0], *p = a[0], i = 3; i >= 0; p++, q++)
	{
		(*q)[i] = *p;
		count++;
		if(count % 4 == 0)
		{
			i--;
			q = &b[0] - 1;
		}
	}

	count = 0;
	for (int *p = b[0]; p < b[3] + 4; p++)
	{
		printf ("%3d", *p);
		count++;
		if (count % 4 == 0)
			printf ("\n");
	}
}
