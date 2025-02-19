#include <stdio.h>
#include <math.h>

void get_coefficient(int *a, int *b, int *c);
void solve_quadratic();
void display_result(int delta, int a, float x1, float x2);

int main()
{
	solve_quadratic();
}

void solve_quadratic()
{
	int a ;
	int b ;
	int c ;
	int delta ;
	float x1 = 0.0;
	float x2 = 0.0;

	get_coefficient(&a, &b, &c);
	delta = (b * b) - 4 * a * c ;

	if (delta == 0 && a)
		x1 = -b/(2.0*a);
	else if (delta > 0 && a)
	{
		x1 = ((float)-b - sqrt(delta))/(2.0 * a);
		x2 = ((float)-b + sqrt(delta))/(2.0 * a);
	}
	else if (!a)
	{
		x1 = -(float)c / b;
	}
	display_result(delta, a, x1, x2);
}

void get_coefficient(int *a, int *b, int *c)
{
	printf ("ax² + bx + c = 0 enter a b and c\n");
	printf ("Enter a : ");
	scanf ("%d", a);
	printf ("Enter b : ");
	scanf ("%d", b);
	printf ("Enter c : ");
	scanf ("%d", c);
}

void display_result(int delta, int a, float x1, float x2)
{
	if (delta < 0)
		printf ("No real solution exist");
	else if (delta == 0 || !a)
		printf ("The solution is %g", x1);
	else
		printf ("The two solutions are %g and %g", x2, x1);
}
