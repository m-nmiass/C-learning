#include"date.h"

int main()
{
	EVENT d;
	printf("Save the event\n");
	read_date(&d);
	printf("Enter the name\n");
	read_name(d.name);
	print_event(d);
}
