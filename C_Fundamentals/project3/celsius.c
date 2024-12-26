#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main ()
{
	//f for fahrenheit
	//c for celsius
	
	float f, c;

	printf ("Enter the Fahrenhit temperature : ");
	scanf ("%f", &f);

	c = (f - FREEZING_PT) * SCALE_FACTOR;
	printf ("The temperature in Celsius is : %.2f", c);
}
