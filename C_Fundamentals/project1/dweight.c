#include<stdio.h>

int main ()
{
	// l for length
	// w for width 
	// h for height
	// we for weight
	int l, w, h, divisor, we, volume ;

	l = 12 ;
	w = 10 ;
	h = 8 ;
	divisor = 166 ;	
	volume = l * w * h ;
	we = (volume + 165) / divisor ;

	printf ("Dimensions: %dx%dx%d\n", l, w, h);
	printf ("Volume (cubic inches) : %d\n", volume);
	printf ("Dimensional weight (pounds): %d", we);
}
	
