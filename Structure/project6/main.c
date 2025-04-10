#include"date.h"
#include<stdlib.h>

int main()
{
	int max;
	int rank;
	int choice;

	do{
		printf("Enter number of events up to %d : ", MAX_EVENT);
		scanf("%d", &max);
		if(max < 0 || max > MAX_EVENT)
			printf("Invalide input try again.\n");
	}while(max < 0 || max > MAX_EVENT);

	getchar();

	read_all(max);
	display_all(max);

	while(1)
	{
		printf("1 : display month\n2 : display all\n3 : add event\n4 : break\n");
		scanf("%d", &choice);

		if(choice == 1){
			printf("Enter the month : ");
			scanf("%d", &rank);
			display_month(rank, max);
		}

		else if(choice == 2)
			display_all(max);

		else if(choice == 3){
			printf("Enter the event rank : ");
			scanf("%d", &rank);
			if(rank > max && rank <= MAX_EVENT){
				max++;
				add_event(rank - 1);
			}

			else if(rank < max)
				add_event(rank - 1);
			else
				printf("Invalide place\n");
		}
		else if(choice == 4)
			exit(1);
		else printf("Invalide input\n");
	}
}
