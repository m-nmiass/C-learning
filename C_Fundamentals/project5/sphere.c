#include<stdio.h>

#define PI 3.141592
#define FRACTION (4.0f / 3.0f)
#define RADIUS 10

int main ()
{
	float volume ;
	volume = PI * FRACTION * RADIUS * RADIUS * RADIUS ;

	printf ("The volume of the sphere with 10 meter radius is %.2f :", volume);
}
