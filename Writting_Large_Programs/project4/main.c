#include<stdio.h>
#include"increment.h"

int main()
{
	printf("counter is : %d", counter);
	increment();
	printf("\nconter after increment is : %d", counter);
}
