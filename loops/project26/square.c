#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	for(int i = 1, j = 1; i <= num; i++){
		for(; j <= i * num; j++)
			printf("%3d", j);
		printf("\n");
	}

	return 0;
}
