#include<stdio.h>

int main()
{
	int grade;
	char cgrade;

	printf("Enter the grade : ");
	scanf("%d", &grade);

	grade == 100 ? cgrade = 'A' : (grade >= 50 ? cgrade = 'F' - ((grade/10) - 4) : (cgrade = 'F'));

	printf("%c", cgrade);
}
