#include <stdio.h>

int main ()
{
	int d1, d2, m1, m2, y1, y2, time1, time2 ;

	printf ("Enter the first date (mm/dd/yy) : ");
	scanf ("%d / %d / %d", &m1, &d1, &y1);

	printf ("Enter the second date (mm/dd/yy) : ");
	scanf ("%d / %d / %d", &m2, &d2, &y2);

	time1 = d1 + m1*30 + y1*12*30 ;
	time2 = d2 + m2*30 + y2*12*30 ;

	if (time1 > time2)
		printf ("%d/%d/%.2d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
	else if (time2 > time1)
		printf ("%d/%d/%.2d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
}	
