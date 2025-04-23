#include<stdlib.h>
#include<stdio.h>
#include<limits.h>

int main()
{
	char *p = malloc(1*sizeof(char));

	for(int i = 2; i < INT_MAX; i++){
		char *temp = realloc(p, i);
		if(temp)
			p = temp ;
		else{
			printf("The max number is %d\n", i);
			printf("The max number of int is %d\n", i * sizeof(int));
			free(p);
			return 0;
		}
	}
}
