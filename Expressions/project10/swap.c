#include<stdio.h>

int main()
{
	int num;
	int tens;
	int hundreds;

	printf("Enter a number with 3 digits up : ");
	scanf("%d", &num);

	hundreds = (num / 100) % 10 ;
	tens = (num / 10) % 10;
	printf("H is %d t is %d\n", hundreds, tens);

	num = ((num - (hundreds * 100)) - (tens * 10)) + ((hundreds * 10) + (tens * 100));
	
	printf("The number is : %d", num);

	return 0;
}
