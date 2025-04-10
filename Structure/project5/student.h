#include<stdio.h>
#include<stdbool.h>

#define MAX_NAME 50
#define MAX_STUDENT 3

typedef struct{
	char name[MAX_NAME];
	float grade1, grade2, grade3, average;
}students;

extern students rank[MAX_STUDENT];

void print_rank();
void average_calculates();
void print_information(int i);
void print_informations();
void read_name(int i);
void read_informations();
