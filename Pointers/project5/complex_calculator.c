#include <stdio.h>

void complex_calculation();
void complex_number(float *real, float *imag, int rank);
int user_choice();
void print_complex(float real, float imag);

int main()
{
	complex_calculation();
}

void complex_calculation()
{
	int operation;
	float real1;
	float imag1;
	float real2;
	float imag2;
	float real, imag ;

	printf ("Welcome to the Complex Calculator!\n\n");
	printf ("Select an operation\n");
	printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\n");

	operation = user_choice();

	complex_number(&real1, &imag1, 1);
	complex_number(&real2, &imag2, 2);
	if (operation == 1)
	{
		real = real1 + real2;
		imag = imag1 + imag2;
	}
	else if (operation == 2)
	{
		real = real1 - real2;
		imag = imag1 - imag2;
	}
	else if (operation == 3)
	{
		real = real1 * real2 - imag1 * imag2;
		imag = real1 * imag2 + imag1 * real2;
	}
	else
	{
		float denominator = real2 * real2 + imag2 * imag2;
		if (denominator == 0)
		{
			printf ("\nError : Division by zero is not allowed");
			return  ;
		}
		real = (real1 * real2 + imag1 * imag2)/denominator;
		imag = (imag1 * real2 - real1 * imag2)/denominator;
	}
	print_complex (real, imag);
}

int user_choice()
{
	int op ;
	do
	{
		printf ("Enter your choice : ");
		scanf ("%d", &op);
		if (op <= 0 || op > 4)
			printf ("Invalid choice try again.\n");
	}while (op <= 0 || op > 4);
	
	return op;
}

void complex_number(float *real, float *imag, int rank)
{
	printf ("\nEnter the real and imaginary parts of the ");
	if (rank == 1)
		printf ("First");
	else
		printf ("Second");
	printf (" complex number (e.g., 3.0 2.0) : ");

	scanf ("%f", real);
	scanf ("%f", imag);
}

void print_complex(float real, float imag)
{
	if (imag >= 0)
		printf ("\nResult : %g + %gi", real, imag);
	else
		printf ("\nResult : %g - %gi", real, -imag);
}
