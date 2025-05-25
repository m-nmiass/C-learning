#include<stdio.h>

int main()
{
	int seconds;
	int hours;
	int minutes;

	printf("Breaking seconds\n");
	printf("Enter the seconds amount : ");
	scanf("%d", &seconds);

	hours = seconds/(60*60);
	seconds %= (60*60);

	minutes = seconds / 60;
	seconds %= 60;

	printf("Hours : %d\n", hours);
	printf("Minutes : %d\n", minutes);
	printf("Seconds : %d", seconds);

	return 0;
}
