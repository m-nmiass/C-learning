#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX_NAME 100

typedef struct{
	int book_serie;
	char book_name[MAX_NAME];
	char author[MAX_NAME];
	int book_pages;
}book;

extern book info_book[];

void read_name(book info_book[]);
void read_author(book info_book[]);
void add_book(book info_book[]);
void remove_books(int *max);
void add_books(int max, book info_book[]);
void change_book(book info_book[]);
int  search_book(int search, book info_book[], int max);
void display_book(book info_book[]);
void display_all(int max);
void clear_cach();
