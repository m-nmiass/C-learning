#include<stdio.h>

int main()
{
	int num;
	int size = 1;

	printf("Enter a number : ");
	scanf("%d", &num);

	for(int i = num; i; i /= 10)
		size *= 10;
	
	size /= 10;
	
	for(; size > 10; size /= 100){
		if(num / size != num % 10){
			printf("Not Palindrom.");
			return 0;
		}

		num = num - (num / size) * size;
		num /= 10;
	}

	printf("Polindrom");
	return 0;
}
