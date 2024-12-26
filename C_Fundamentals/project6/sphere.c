#include<stdio.h>

#define PI 3.141592
#define FRACTION (4.0f / 3.0f)

int main ()
{
	float radius, volume ;

	printf ("Enter the radius : ");
	scanf ("%f", &radius);

	volume = FRACTION * PI * radius * radius * radius ;

	printf ("The volume of the sphere is %.2f", volume);
}
