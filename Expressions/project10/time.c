#include<stdio.h>

int main()
{
	int min;
	int sec;
	int hour;
	int day;
	int month;
	int year;

	printf("Enter the sec amount : ");
	scanf("%d", &sec);

	year = sec / (365 * 24 * 60);
	sec %= 365 * 24 * 60;
	
	month = sec / (30 * 24 * 60);
	sec %= 30 * 24 * 60;

	day = sec / (24 * 60);
	sec %= 24 * 60;

	min = sec / 60;
	sec %= 60;

	printf("Year : %d\nMonth : %d\nDay : %d\nHour : %d\nMinutes : %d\nSeconds : %d\n", year, month, day, hour, min, sec);

	return 0;
}
