#include <stdio.h>

int main()
{
	//h for height
	//l for lenght
	//w for width
	//we for weight
	int l, w, h, we, volume ;

	printf ("Enter height of the box :");
	scanf ("%d", &h);
	printf ("Enter lenght of the box :");
	scanf("%d", &l);
	printf ("Enter width of the box :");
	scanf ("%d", &w);

	volume = h * l * w ;
	we = (volume + 165) / 166 ;

	printf ("The volume (cubic inches): %d\n", volume);
	printf ("Dimensional weight (pounds): %d\n", we);
}
