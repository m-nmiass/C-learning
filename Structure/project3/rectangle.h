#include<stdio.h>

typedef struct {
	float length ;
	float width ;
	float area ;
	float perimeter ;
}rectangle;

float area(rectangle p);
float perimeter(rectangle p);
void print_struct(rectangle p);
