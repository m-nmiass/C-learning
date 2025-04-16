#include"book.h"

book info[MAX_BOOKS];

void read_title(int i)
{
	char ch;
	int j = 0;
	while((ch = getchar()) != '\n')
		if(j < MAX_NAME)
			info[i].title[j++] = ch;
	info[i].title[j] = '\0';
}

void read_author(int i)
{
	char ch;
	int j = 0;
	while((ch = getchar()) != '\n')
		if(j < MAX_NAME)
			info[i].author[j++] = ch;
	info[i].title[j] = '\0';
}

void clear_cach()
{
	while(getchar() != '\n');
}

void add_book(int *max)
{
	if(*max + 1 == MAX_BOOKS){
		printf("The space is full.\n");
		return;
	}
	read_book(*max);
	(*max)++;
}

void delete_book(int *max)
{
	if(*max == 0){
		printf("The space is empty.\n");
		return;
	}
	(*max)--;
}

void print_book(int i)
{
	printf("%s\t\t%s\t\t%d\n", info[i].title, info[i].author, info[i].book_pages);
}

void print_books(int max)
{
	printf("Title\t\tAuthor\t\tBook Pages\n");
	for(int i = 1; i <= max; i++)
		print_book(i - 1);
}

void read_book(int i)
{
	int book_pages;

	printf("Enter book title : ");
	read_title(i);

	printf("Enter author : ");
	read_author(i);

	do{
		printf("Enter the book pages : ");
		scanf("%d", &book_pages);
		clear_cach();
		if(book_pages <= 0)
			printf("Invalid number try again.\n");
	}while(book_pages <= 0);
	info[i].book_pages = book_pages;
}
