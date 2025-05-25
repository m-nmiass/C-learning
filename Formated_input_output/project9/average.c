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
	real = average;
	decimal = average - real;

	printf("Average 1 dic : %.1f\n", average);
		
	printf("Rounded average : ");
	if(decimal < 0.5f)
		printf("%d\n", real);
	else
		printf("%d\n", real + 1);

	printf("Formatted average : %.2d", real);
}
