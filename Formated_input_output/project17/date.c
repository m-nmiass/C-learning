#include<stdio.h>

int main()
{
	int day;
	int month;
	int year;

	printf("Enter The day in format DD/MM/YYYY :");
	scanf("%d /%d /%d", &day, &month, &year);

	printf("You entered the date: Day %d, Month %d, Year %d", day, month, year);

	return 0;
}
