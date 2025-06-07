#include<stdio.h>

int main()
{
	int year;

	printf("Enter the year : ");
	scanf("%d", &year);

	printf((((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) ? "Leap" : "Not leap");

	return 0;
}
