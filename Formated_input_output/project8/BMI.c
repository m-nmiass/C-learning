#include<stdio.h>

int main()
{
	float bmi;
	float weight;
	float height;

	printf("Enter the Weight (in kg): ");
	scanf("%f", &weight);

	printf("Enter the height (in meter): ");
	scanf("%f", &height);

	bmi = weight/(height * height);

	printf("Your BMI is %.2f", bmi);

	return 0;
}
