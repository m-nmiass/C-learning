#include <stdio.h>

#define N 10

void max_min (float a[N], float *max, float *min);

int main()
{
	float a[N];
	float max ;
	float min ;

	printf ("Enter 10 numbers : ");
	for(int i = 0; i < N; i++)
	       scanf ("%f", &a[i]);

	max_min (a, &max, &min);

	printf ("The largest : %g\n", max);
	printf ("The smallest : %g", min);
}

void max_min (float a[N], float *max, float *min)
{
	*max = *min = a[0];
	for(int i = 0; i < N; i++)
	{
		if (*max < a[i])
			*max = a[i];
		if (*min > a[i])
			*min = a[i];
	}
}
