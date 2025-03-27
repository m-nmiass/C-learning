#include<stdio.h>
#include"opperations.h"

int main()
{
	int x, y ;
	int operation;

	printf("Enter the first number : ");
	scanf("%d", &x);

	printf("Enter the second number : ");
	scanf("%d", &y);

	printf("1 = add, 2 = sub, 3 = mult, 4 = div, 5 = mod\n");
	printf("Enter the operation : ");
	scanf("%d", &operation);

	if(operation == 1)
		printf("%d + %d = %d", x, y, add(x, y));
	else if(operation == 2)
		printf("%d - %d = %d", x, y, sub(x, y));
	else if(operation == 3)
		printf("%d * %d = %d", x, y, mul(x, y));
	else if (operation == 4)
		printf("%d / %d = %d", x, y, dev(x, y));
	else if (operation == 5)
		printf("%d %% %d = %d", x, y, dev(x, y));
	else
		printf("Invalid operation");
}
