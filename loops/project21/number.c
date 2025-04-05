#include<stdio.h>

int main()
{
	int max_count = 0;
	int current_count = 0;
	int num ;
	int rank = 1;

	printf("Enter the number of numbers you want : ");
	scanf("%d", &num);

	printf("N°		N°DIV		NUM\n");

	for(int j = 1; rank <= num; j++) {
		for(int i = 1; i <= j; i++) {
			if(j % i == 0)
				current_count++;
		}
		if(max_count < current_count) {
			max_count = current_count;
			printf("%d\t\t%d\t\t%d\n", rank, current_count, j);
			rank++;
		}
		current_count = 0;
	}
}
