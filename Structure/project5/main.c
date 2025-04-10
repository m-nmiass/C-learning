#include"student.h"
#include<stdlib.h>

int main()
{
	int choice ;
	int i ;

	printf("Enter Students information up to %d student(s)\n", MAX_STUDENT);
	read_informations();
	average_calculates();
	printf("1: to print all inforamtions\t2: to print a student information\t3: to print student ranki\t4: terminate\n");

	while(1){
		scanf("%d", &choice);
		getchar();
		if(choice == 1){
			print_informations();
			printf("\n");
		}

		else if(choice == 2){
			printf("\nEnter the rank : ");
			scanf("%d", &i);
			getchar();
			if(i > 0 && i < 11)
				print_information(i - 1);
			else
				printf("Invalid rank\n");
		}

		else if(choice == 3){
			print_rank();
			printf("\n");
		}

		else if(choice == 4){
			exit(1);
		}

		else
			printf("\nInvalid input try again.");
	}
}
