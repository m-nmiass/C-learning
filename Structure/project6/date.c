#include"date.h"

date event[MAX_EVENT];

void read_location(int i)
{
	char ch;
	int j = 0;

	ch = getchar();
	if(ch != '\n')
		event[i].location[j++] = ch;

	while((ch = getchar())!= '\n'){
		if(j < MAX_NAME - 1)
			event[i].location[j++] = ch;
	}
	event[i].location[j] = '\0';
}

void read_name(int i)
{
	char ch;
	int j = 0;

	ch = getchar();

	if(ch != '\n')
		event[i].name[j++] = ch ;

	while((ch = getchar()) != '\n'){
		if(j < MAX_NAME - 1)
			event[i].name[j++] = ch;
	}
	event[i].location[j] = '\0';
}

void display_all(int max)
{
	int count = 0;
	printf("Name\t\tdd / mm / yy\t\th / m\t\tLocation\n");
	for(; count < max; count++){
		printf("%d. %s\t\t%d / %d / %d\t\t%d / %d\t\t%s\n", count + 1, event[count].name, event[count].day, event[count].month, event[count].year, event[count].hour, event[count].minute, event[count].location);
	}
}

void read_all(int max)
{
	int day, month, year, hour, minute;

	printf("Enter the %d event(s)\n", max);
	for(int i = 0; i < max; i++){
		printf("\n");	
		printf("Enter the event Name : ");
		read_name(i);

		printf("\nEnter the location : ");
		read_location(i);

		do{
			printf("Enter the day : ");
			scanf("%d", &day);
			if(!day_valide(day))
				printf("Invalid day try again.\n");
		}while(!day_valide(day));

		do{
			printf("Enter the month : ");
			scanf("%d", &month);
			if(!month_valide(month))
				printf("Invalid month try again.\n");
		}while(!month_valide(month));

		do{
			printf("Enter the year : ");
			scanf("%d", &year);
			if(!year_valide(year))
				printf("Invalide year try again.\n");
		}while(!year_valide(year));

		do{
			printf("Enter the hour : ");
			scanf("%d", &hour);
			if(!hour_valide(hour))
				printf("Invalide hour try again.\n");
		}while(!hour_valide(hour));

		do{
			printf("Enter the minute : ");
			scanf("%d", &minute);
			if(!minute_valide(minute))
				printf("Invalide minute try again.\n");
		}while(!minute_valide(minute));
		getchar();

		event[i].day = day ;
		event[i].month = month ;
		event[i].year = year ;
		event[i].hour = hour ;
		event[i].minute = minute ;
	}
}

bool day_valide(int day)
{
	return (day > 0 && day < 32);
}

bool month_valide(int month)
{
	return (month > 0 && month < 13);
}

bool year_valide(int year)
{
	return (year > 0);
}

bool hour_valide(int hour)
{
	return (hour > 0 && hour < 24);
}

bool minute_valide(int minute)
{
	return (minute > 0 && minute < 60);
}

void display_month(int month, int max)
{
	for(int i = 0; i < max; i++) {
		if(event[i].month == month)
			display_event(i);
	}
}

void display_event(int i)
{
	printf("%s %d/%d/%d %d:%d %s\n", event[i].name, event[i].day, event[i].month, event[i].year, event[i].hour, event[i].minute, event[i].location);
}

void add_event(int i)
{
	int day, month, year, hour, minute ;

	printf("Enter the event Name : ");
                read_name(i);

                printf("\nEnter the location : ");
                read_location(i);

                do{
                        printf("Enter the day : ");
                        scanf("%d", &day);
                        if(!day_valide(day))
                                printf("Invalid day try again.\n");
                }while(!day_valide(day));

                do{
                        printf("Enter the month : ");
                        scanf("%d", &month);
                        if(!month_valide(month))
                                printf("Invalid month try again.\n");
                }while(!month_valide(month));

                do{
                        printf("Enter the year : ");
                        scanf("%d", &year);
                        if(!year_valide(year))
                                printf("Invalide year try again.\n");
                }while(!year_valide(year));

                do{
                        printf("Enter the hour : ");
                        scanf("%d", &hour);
                        if(!hour_valide(hour))
                                printf("Invalide hour try again.\n");
                }while(!hour_valide(hour));

                do{
                        printf("Enter the minute : ");
                        scanf("%d", &minute);
                        if(!minute_valide(minute))
                                printf("Invalide minute try again.\n");
                }while(!minute_valide(minute));
                getchar();

                event[i].day = day ;
                event[i].month = month ;
                event[i].year = year ;
                event[i].hour = hour ;
                event[i].minute = minute ;
}

