#include <stdio.h>
int main ()
{
	int GSI, group, publisher, item, check;

	printf ("Enter ISBN : ");
	scanf ("%d-%d-%d-%d-%d", &GSI, &group, &publisher, &item, &check);

	printf ("GSI prefix : %d\n", GSI);
	printf ("Group identifier : %d\n", group);
	printf ("Publisher code : %d\n", publisher);
	printf ("Item number : %d\n", item);
	printf ("Check digit : %d", check);
}
