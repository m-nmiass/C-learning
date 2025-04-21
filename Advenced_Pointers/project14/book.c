#include"book.h"

void read_name(book info_book[])
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		if(i < MAX_NAME)
			info_book[0].book_name[i++] = ch;
	}
	info_book[0].book_name[i++] = '\0';
}

void read_author(book info_book[])
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		if(i < MAX_NAME)
			info_book[0].author[i++] = ch;
	}
	info_book[0].book_name[i++] = '\0';
}

void add_book(book info_book[]);
{
	int book_serie;
	int book_pages;

	printf("Enter the book serie : ");
	do{
		scanf("%d", &book_serie);
		if(book_serie <= 0)
			printf("Invalid book serie try again : ");
	}while(book_serie <= 0);

	printf("Enter the book name : ");
	read_name(info_book);

	printf("Enter the book author : ");
	read_author(info_book);

	printf("Enter the book pages : ");
	do{
		scanf("%d", &book_pages);
		if(book_pages <= 0)
			printf("Invalid book pages try again : ");
	}while(book_pages <= 0);

	info_book[0].book_serie = book_serie;
	info_book[0].book_pages = book_pages;
}

void remove_books(int *max)
{
	*max = 0;
}

void add_books(int max, book info_book[]);
{
	for(int i = 1; i < max; i++)
		add_book(info_book + i - 1);
}

void change_book(book info_book[])
{
	add_book(info_book[]);
}

int search_book(int search, book info_book, int max)
{
	for(int i = 1; i < max; i++){
		if(search == info_book[i - 1].book_serie)
			return i - 1;
	}
	else
		return -1;
}

void display_book(book info_book[])
{
	printf("%s\t\t%s\t\t%d\t\t%d\n", info_book[0].book_serie, info_book[0].author, info_book[0].book_serie, info[0].book_pages);
}

void display_all(int max)
{
	printf("Name\t\tAuthor\t\tBook Serie\t\tBook Pages\n");
	for(int i = 1; i < max + 1; i++){
		diplay_book(info_book + (i - 1));
	}
}

void clear_cach()
{
	while((getchar()) != '\n');
}
