#include <stdio.h>

#define count 5
int main ()
{
	int i = 0 ;
	int sum = 0 ;
	int a[count] ;

	printf ("Enter 5 integers : \n");
	while (i < count)
		scanf ("%d", &a[i++]);

	i = 0 ;
	while (i < count)
		sum += a[i], i++ ;

	printf ("Sum of the array elements is : %d", sum);
}
