#include"part.h"

part inventory[MAX_PARTS];

void read_line(int i)
{
	char ch;
	int j = 0;
	while((ch = getchar()) != '\n'){
		if(j < MAX_WORD)
			inventory[i].name[j++] = ch;
	}
	inventory[i].name[j] = '\0';
}

void search_part(int max, int place)
{
	for(int i = 0; i < max; i++){
		if(inventory[i].part_number == place){
			print_part(i);
			return;
		}
	}
	printf("The number dont exist.\n");
}

void update_part(int max, int place)
{
	int i = 0;
	int on_hand;
	for(; i < max; i++)
		if(inventory[i].part_number == place)
			break;
	if(inventory[i].part_number == max){
		printf("Number ot found.\n");
		return;
	}
	printf("Enter change in quality hand : ");
	scanf("%d", &on_hand);
	inventory[i].on_hand = on_hand;
	clear_buffer();
}

void clear_buffer()
{
	while(getchar() != '\n');
}

void insert_part(int *max)
{
	int part_number, on_hand;

	if(*max == MAX_PARTS){
		printf("You reach max parts.\n");
		return;
	}

	printf("Enter the part number : ");
	scanf("%d", &part_number);
	clear_buffer();
	for(int i = 0; i < *max; i++){
		if(inventory[i].part_number == part_number){
			printf("Part number already exist.\n");
			return;
		}
	}
	inventory[*max - 1].part_number = part_number;

	printf("\nEnter part name : ");
	read_line(*max - 1);

	printf("\nEnter quantity on hand : ");
	scanf("%d", &on_hand);
	inventory[*max - 1].on_hand = on_hand;
	*max += 1;
}

void print_parts(int max)
{
	printf("Part Number\t\tPart Name\t\t\tQuantity on Hand\n");
	for(int i = 0; i < max; i++){
		print_part(i);
	}
}

void print_part(int i)
{
	printf("%d\t\t\t%s\t\t\t\t%d\n", inventory[i].part_number, inventory[i].name, inventory[i].on_hand);
}
