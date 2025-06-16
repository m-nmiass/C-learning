#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define SIZE 100

bool is_magic(int n, int matrix[n][n]);
int column_sum(int n, int matrix[n][n]);
int row_sum(int n, int matrix[n][n]);
int diagonals_sum(int n, int matrix[n][n]);
void read_matrix(int n, int matrix[n][n]);

int main()
{
	int size;
	int matrix[SIZE][SIZE];

	printf("Enter the matrix size bigger then 0 less or equal to 100 : ");

	do{
		scanf("%d", &size);
		if(size <= 0 || size > 100)
			printf("Invalid input try again : ");
	}while(size <= 0 || size > 100);

	read_matrix(size, matrix);

	if(is_magic(size, matrix))
			printf("The matrix is magic.");
	else
			printf("The matrix is not magic.");

	return 0;
}

void read_matrix(int n, int matrix[n][n])
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			scanf("%d", &matrix[i][j]);
	}
}

bool is_magic(int n, int matrix[n][n])
{
	return(column_sum(n, matrix) == row_sum(n, matrix) && column_sum(n, matrix) == diagonals_sum(n, matrix));
}

int row_sum(int n, int matrix[n][n])
{
	int sum = 0;
	int first_sum = 0;
	
	for(int i = 0; i < n; i++)
		first_sum += matrix[0][i];

	for(int i = 1; i < n; i++){
		for(int j = 0; j < n; j++){
			sum += matrix[i][j];
		}
		printf("sum : %d\n", sum);
		if(sum != first_sum){
			printf("The square is not magic.");
			exit(EXIT_SUCCESS);
		}
		sum = 0;
	}
	return first_sum;
}

int column_sum(int n, int matrix[n][n])
{
	int sum = 0;
	int first_sum = 0;

	for(int i = 0; i < n; i++)
		first_sum += matrix[i][0];

	for(int i = 1; i < n; i++){
		for(int j = 0; j < n; j++){
			sum += matrix[j][i];
		}
		if(first_sum != sum){
			printf("The square is not magic.");
			exit(EXIT_SUCCESS);
		}
		sum = 0;
	}

	return first_sum;
}

int diagonals_sum(int n, int matrix[n][n])
{
	int first_sum = 0;
	int second_sum = 0;

	for(int i = 0, j = 0; i < n; i++, j++)
		first_sum += matrix[i][j];

	for(int i = 0, j = n - 1; i < n; i++, j--)
		second_sum += matrix[i][j];

	printf("first_sum = %d, second_sum = %d\n", first_sum, second_sum);
	if(first_sum != second_sum){
		printf("The square is not magic.");
		exit(EXIT_SUCCESS);
	}
	return first_sum;
}
