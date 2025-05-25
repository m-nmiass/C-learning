#include<stdio.h>

int main()
{
	int seconds;
	int day;
	int hour;
	int minute;

	printf("Enter the seconds : ");
	scanf("%d", &seconds);

	day = seconds / (60*60*24);
	seconds %= (60*60*24);

	hour = seconds / (60*60);
	seconds %= (60*60);

	minute = seconds / 60;
	seconds %= 60;

	printf("Days = %d\n", day);
	printf("Hours = %d\n", hour);
	printf("Minutes = %d\n", minute);
	printf("Seconds = %d\n", seconds);

	return 0;
}
