#include<stdio.h>

int main()
{
	int a[3][4];
	int b[4][3] = {0};
	int count = 0 ;

	printf ("Enter 12 integers : ");
	for(int *p = a[0]; p < a[2] + 4; p++)
		scanf ("%d", p);

	for(int *p = a[0], (*q)[3] = &b[0], i = 0; p < a[0] + 12; p++ , q++)
	{
		(*q)[i] = *p ;
		count++;
		if (count % 4 == 0)
		{
			q = &b[0] - 1;
			i++;
		}
	}
	
	for(int *p = b[0]; p < b[3] + 3; p++)
	{
		if((p - b[0])%3 == 0)
		       printf ("\n");
		printf ("%3d ", *p);
	}
}	
