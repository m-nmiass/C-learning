#include<stdio.h>
#include"string_utils.h"


int main()
{
	int size;

	printf("Enter the string size up to %d : ", SIZE);
	scanf("%d", &size);
	getchar();

	printf("Enter the string : ");
	read_line(size);
	reverse_string(size);

	printf("The reversed string is : %s", str);
}
