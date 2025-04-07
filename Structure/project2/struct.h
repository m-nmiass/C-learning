#include<stdio.h>

#define MAX 100

typedef struct person{
	char name[MAX];
	int age;
}person;

void print_struct(person p);
