#include<stdio.h>

#define TEST(condition, ...) ((condition) ? \
printf("Passed Test") :			    \
printf(__VA_ARGS__))

int main()
{
	int x = 7;
	int y = 5;
	TEST(x > y, "%d is less then %d", x, y);
}
