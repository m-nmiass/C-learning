#include<stdio.h>

#define DEBUG_LOG(LEVEL, ...)		\
printf("[" LEVEL "] " __VA_ARGS__)	

int main()
{
	DEBUG_LOG("INFO", "Program started");
}
