#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *concat(const char *str1, const char *str2);

int main()
{
	char *p = "hello ";
	char *q = "world";
	printf("%s\n", concat(p, q));
}

char *concat(const char *str1, const char *str2)
{
	char *result = (char *)malloc(strlen(str1) + strlen(str2) + 1);
	if(result == NULL){
		printf("Error : malloc failed\n");
		exit(0);
	}
	strcpy(result, str1);
	strcat(result, str2);

	return result;
}
