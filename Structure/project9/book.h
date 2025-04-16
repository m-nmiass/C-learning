#include<stdio.h>
#include<string.h>

#define MAX_BOOKS 100
#define MAX_NAME 50

typedef struct {
	char title[MAX_NAME + 1];
	char author[MAX_NAME + 1];
	int book_pages;
}book;

extern book info[MAX_BOOKS];

void read_title(int i);
void read_author(int i);
void clear_cach();
void add_book(int *max);
void delete_book(int *max);
void print_book(int i);
void print_books(int max);
void read_book(int i);
