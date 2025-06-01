#include<stdio.h>

int main()
{
	int hour;
	int min;

	printf("Enter the number of minutes : ");
	scanf("%d", &min);

	hour = min / 60;
	min = min % 60;

	printf("Hours : %d minutes : %d", hour, min);

	return 0;
}
