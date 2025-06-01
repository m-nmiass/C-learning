#include<stdio.h>

int main()
{
	int hour;
	int add;

	printf("Enter the hour : ");
	scanf("%d", &hour);

	printf("Enter the added time : ");
	scanf("%d", &add);

	hour = (hour + add) % 12;

	printf("The time is %d", hour);
	return 0;
}
