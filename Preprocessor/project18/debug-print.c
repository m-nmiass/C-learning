#include<stdio.h>

#define DEBUG_PRINT(name, var) 	\
do {				\
printf(#name " is : " #var);		\
}while(0)			\

int main()
{
	int var = 8 ;
	DEBUG_PRINT(var, 8);
}
