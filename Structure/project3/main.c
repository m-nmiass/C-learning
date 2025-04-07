#include"rectangle.h"

int main()
{
	rectangle cal;

	printf("Rectangle Calculation\n");
	printf("Enter the length : ");
	scanf("%f", &cal.length);
	printf("Enter the width : ");
	scanf("%f", &cal.width);

	cal.area = area(cal);
	cal.perimeter = perimeter(cal);
	print_struct(cal);
}
