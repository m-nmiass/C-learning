#include<stdio.h>

int main()
{
	int hour;
	int rotation;

	printf("Enter the hour : ");
	scanf("%d", &hour);
	printf("Enter the rotation : ");
	scanf("%d", &rotation);

	hour = (hour + rotation) % 12;

	if(hour <= 0)
		hour += 12;

	printf("The hour after te rotation is : %d", hour);

	return 0;
}
