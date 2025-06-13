#include<stdio.h>

int is_triangle(int a, int b, int c);
void triangle_type(int a, int b, int c);

int main()
{
	int a;
	int b;
	int c;

	printf("Enter the lenght of 3 sides : ");
	scanf("%d%d%d", &a, &b, &c);

	is_triangle(a, b, c);

	return 0;
}

int is_triangle(int a, int b, int c)
{
	if(a + b > c){
		triangle_type(a, b, c);
		return 1;
	}
	if(a + c > b){
		triangle_type(a, c, b);
		return 1;
	}
	if(b + c > a){
		triangle_type(b, c, a);
		return 1;
	}

	printf("Not a triangle.");
	return 0;
}

void triangle_type(int a, int b, int c)
{
	if(c*c == a*a + b*b)
		printf("Right_angle ");
	if(c == a && c == b)
		printf("Equilateral.");
	else if(c == a || c == b)
		printf("Isosceles.");
	else
		printf("Scalene.");
}
