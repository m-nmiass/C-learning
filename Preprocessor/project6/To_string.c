#include<stdio.h>

#define TO_STRING(x) printf("Hello, world\n"#x)

int main()
{
	TO_STRING(Test);
}
