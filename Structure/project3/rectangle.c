#include"rectangle.h"

float area(rectangle p)
{
	return p.length * p.width;
}

float perimeter(rectangle p)
{
	return (p.length + p.width) / 2;
}

void print_struct(rectangle p)
{
	printf("The area is %g\n", p.area);
	printf("The perimeter is %g\n", p.perimeter);
}
