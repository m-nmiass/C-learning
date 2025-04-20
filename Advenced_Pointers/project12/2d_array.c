#include<stdio.h>
#include<stdlib.h>

int main()
{
	int column;
	int row;

	printf("Enter the rows size : ");
	do{
		scanf("%d", &row);
		if(row <= 0)
			printf("Invalide input try agin : ");
	}while(row <= 0);

	printf("Enter the column size : ");
	do{
		scanf("%d", &column);
		if(column <= 0)
			printf("Invalide input try again : ");
	}while(column <= 0);

	int *p = malloc(column*row*sizeof(int));

	printf("Enter the 2d array %d * %d\n", row, column);
	for(int i = 0; i < row * column; i++)
		scanf("%d", &p[i]);

	printf("\n");

	for(int i = 0; i < row * column; i++){
		if(i % column == 0)
			printf("\n");
		printf("%3d", p[i]);
	}

	free(p);
}
