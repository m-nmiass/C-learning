#include <stdio.h>

#define MAX 80
int main ()
{
	char a[MAX] ;
	int shift ;
	int i = 0 ;
	int j = 0 ;

	printf ("Enter message to be encrypted : ");
	while ((a[i] = getchar()) != '\n')
		i++ ;

	printf ("Enter shift amount (1 - 25) : ");
	scanf ("%d", &shift);

	printf ("Encrypted message : ");
	while (j < i)
	{
		if (a[j] >= 'A' && a[j] <= 'Z')
			a[j] = ((a[j] - 'A' + shift) % 26 + 'A') ;
		else if (a[j] >= 'a' && a[j] <= 'z')
			a[j] = ((a[j] - 'a' + shift) % 26 + 'a') ;

		printf ("%c", a[j]), j++ ;
	}
}
