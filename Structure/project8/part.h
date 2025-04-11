#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_PARTS 100
#define MAX_WORD 25

typedef struct{
	char name[MAX_WORD + 1];
	int part_number;
	int on_hand;
}part;

extern part inventory[MAX_PARTS];

void insert_part(int *max);
void search_part(int max, int place);
void update_part(int max, int place);
void print_parts(int max);
void print_part(int i);
void clear_buffer();
void read_line(int i);

