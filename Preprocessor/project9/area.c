#include<stdio.h>

#define PI 3.14159f
#define AREA(r) r*r*PI

int main()
{
	float r;

	printf("Enter the circle radius : ");
	scanf("%f", &r);

	printf("The area of a circle is : %g", AREA(r));
}
