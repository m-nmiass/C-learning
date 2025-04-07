#include"struct.h"
#include"read.h"

int main()
{
	person p1;

	printf("Enter person information\n");
	printf("Enter person name : ");
	read_line(p1.name);
	printf("Enter the age : ");
	scanf("%d", &p1.age);

	printf("The informations are\n");
	print_struct(p1);
}
