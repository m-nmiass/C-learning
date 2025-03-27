#include<stdio.h>

int mode = 1 ;

void set_mode(int new_mode)
{
	mode = new_mode;
}

void print_mode()
{
	printf("The mode is : %d\n", mode);
}
