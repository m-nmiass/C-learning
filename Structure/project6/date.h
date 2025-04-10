#include<stdio.h>
#include<stdbool.h>

#define MAX_NAME 50
#define MAX_EVENT 5

typedef struct {
	char name[MAX_NAME];
	int day, month, year;
	int hour, minute;
	char location[MAX_NAME];
}date;

extern date event[MAX_EVENT];

void read_location(int i);
void read_name(int i);
void display_all(int max);
void display_month(int month, int max);
void display_next();
void add_event(int i);
bool day_valide(int day);
bool month_valide(int month);
bool year_valide(int year);
bool hour_valide(int hour);
bool minute_valide(int minute);
void read_all(int max);
void display_event(int i);
