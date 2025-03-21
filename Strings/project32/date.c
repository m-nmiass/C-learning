#include<stdio.h>

int main()
{
	char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int month;
	int day;
	int year;

	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d / %d / %d", &month, &day, &year);

	printf("You Entered the date %s %d, %d", months[month - 1], day, year);

	return 0;
}
