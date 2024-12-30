#include <stdio.h>

int main ()
{
	int date, month, year, time, min_time ;

	min_time = 2147483647 ;

	do{
		printf ("Enter a date (mm/dd/yy) : ");
		scanf ("%d / %d / %d", &month, &date, &year);
		time = date + (month * 30) + (year * 12 * 30) ;
		(time < min_time && time) ? min_time = time : 1 ;
	}while (date||month||year);

	year = min_time / (30 * 12) ;
	min_time -= year * 30 * 12 ;
	month = min_time / 30 ;
	min_time -= month * 30 ;
	date = min_time ;

	printf ("The earliest date is %d/%d/%d", month, date, year); 
}
