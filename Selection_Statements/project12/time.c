#include<stdio.h>

int main()
{
	int time;
	
	printf("Enter the time in (24h format) : ");
	scanf("%d", &time);

	printf("The time in (12h format) : %d", (time % 12 == 0) ? 12 : time % 12);
	if(time < 12)
		printf("AM");
	else
		printf("PM");

	return 0;
}
