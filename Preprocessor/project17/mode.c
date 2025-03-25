#include<stdio.h>

#define Debug 1
#define Release 2

int main()
{
	int s;

	printf("Mode '1' = Debug mode\nMode '2' = Release mode");
	printf("\nEnter a mode : ");
	scanf("%d", &s);

	#if Debug == 1
		printf("Debug mode");
	#elif Release == 2
		printf("Release mode");
	#else
		printf("Unkonwn mode");
	#endif
	return 0;
}
