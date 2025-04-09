#include<stdio.h>

#define MAX 100

typedef struct {
	int day ;
	int month ;
	int year ;
}DATE;

typedef struct {
	char name[MAX];
	DATE event_date;
}EVENT;

void read_date(EVENT *d);
void read_name(char *arr);
void print_event(EVENT d);
