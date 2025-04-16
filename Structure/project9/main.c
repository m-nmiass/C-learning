#include"book.h"

int main()
{
	printf("////Book System//////\n");
	int max = 0;
	int choice ;
	while(1)
	{
		printf("Enter the valide command\n");
		printf("1 : add a book\n");
		printf("2 : delete the last book\n");
		printf("3 : print all books\n");
		printf("4 : delete all books\n");
		printf("5 : exist\n");
		printf("the command is : ");
		scanf("%d", &choice);

		switch(choice){
			case  1 :
				add_book(&max);
				break;
			case 2 :
				delete_book(&max);
				break;
			case 3 :
				print_books(max);
				break;
			case 4 :
				max = 0;
				break;
			case 5 :
				return 0;
			default :
				printf("Invalid number try agan.\n");
				break;
		}
	}
}
