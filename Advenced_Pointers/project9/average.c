#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *p;
	int size;
	float sum = 0;
	float average;

	printf("Enter the number ammont : ");
	scanf("%d", &size);

	p = (float *)malloc(size * sizeof(float));

	printf("Enter the numbers : ");

	for(int i = 0; i < size; i++)
		scanf("%f", &p[i]);

	printf("The numbers are : ");

	for(int i = 0; i < size; i++){
		printf("%g ", p[i]);
		sum += p[i];
	}

	average = sum / size;

	printf("\nThe sum is : %g\nThe average is %g", sum, average);
}
