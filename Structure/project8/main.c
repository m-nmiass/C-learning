#include "part.h"

int main()
{
	int max = 1;
	int place;
	char choice;

	while(1)
	{
		printf("i : insert\ns : search\nu : update\np : print\nq : quit\n");
		printf("Enter the operation : ");
		scanf("%c", &choice);
		clear_buffer();

		switch(choice) {
			case 'i' :
				 insert_part(&max);
				 clear_buffer();
				 printf("\n");
				 break;
			case 's' :
				 printf("Enter the part number : ");
				 scanf("%d", &place);
				 clear_buffer();
				 search_part(max, place);
				 printf("\n");
				 break;
			case 'u' :
				 printf("Enter the part number : ");
				 scanf("%d", &place);
				 clear_buffer();
				 update_part(max, place);
				 printf("\n");
				 break;
			case 'p' :
				 print_parts(max);
				 break;
			case 'q' :
				 exit(0);
			default : 
				 printf("Invalid choice try again\n.");
				 break;
		}
	}
}

