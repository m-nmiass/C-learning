#include<stdio.h>

int main()
{
	float average;
	float grade1;
	float grade2;
	float grade3;
	int real;
	float decimal;

	printf("Enter The 3 grades : ");
	scanf("%f %f %f", &grade1, &grade2, &grade3);

	average = (grade1 + grade2 + grade3) / 3;
	real = average + 0.5f;
	decimal = average - (int)average;

	printf("Average 1 dic : %.1f\n", average);
	printf("Rounded average : %d\n", real);
	printf("Formatted average : %.2d", real);

	return 0;
}
