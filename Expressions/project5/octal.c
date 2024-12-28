#include <stdio.h>

int main ()
{
	int num, octal ;

	printf ("Enter a number between 0 and 32767 : ");
	scanf ("%d", &num);

	octal = num % 8 ;
	num = num / 8	;
	octal = octal + (num % 8)*10 , num = num / 8 ;
	octal = octal + (num % 8)*100, num = num / 8 ;
	octal = octal + (num % 8)*1000, num = num / 8 ;
	octal = octal + (num % 8)*10000, num = num / 8 ;

	printf ("In octal, your number is : 0%d", octal);
}	
