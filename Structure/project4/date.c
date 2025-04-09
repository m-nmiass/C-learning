#include"date.h"

void read_date(EVENT *d)
{
	int day, month, year;
	do{
		printf("Enter the date : ");
		scanf("%d", &day);
		if(day > 31 || day < 1)
			printf("Invalide date try again.\n");
	}while(day > 31 || day < 1);

	do{
		printf("Enter the month : ");
		scanf("%d", &month);
		if(month > 12 || month < 1)
			printf("Invalide month try again.\n");
	}while(month > 12 || month < 1);

	do{
		printf("Enter the year : ");
		scanf("%d", &year);
		if(year < 0)
			printf("Invalide year try again.\n");
	}while(year < 0);

	d->event_date.day = day;
	d->event_date.month = month;
	d->event_date.year = year;

	getchar();
}

void read_name(char *arr)
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		if(i < MAX - 1)
			arr[i++] = ch;
	}
	arr[i] = '\0';
}

void print_event(EVENT d)
{
	printf("The event name : %s\n", d.name);
	printf("The date is : %d/%d/%d\n", d.event_date.day, d.event_date.month, d.event_date.year);
}
