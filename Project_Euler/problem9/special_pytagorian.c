#include<stdio.h>

int square(int num)
{
	return num*num;
}

int main()
{
	int a;
	int b;
	int c;
	for(a = 1; a < 1000; a++){
		for(b = 1; b < 1000; b++){
			for(c = 1; c < 1000; c++){
				if((square(a) + square(b) == square(c)) && ((a + b + c) == 1000)){
					printf("a is %d b is %d c is %d The product is %d", a, b, c, a*b*c);
					return 0;
				}
			}
			c = 1;
		}
		b = 1;
	}
}
