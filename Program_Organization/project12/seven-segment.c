#include<stdio.h>
#include<stdbool.h>

const bool segement[10][7] = {{1, 1, 1, 1, 1, 1, 0}, //Number 0
			      {0, 1, 1, 0, 0, 0, 0}, //Number 1
			      {1, 1, 0, 1, 1, 0, 1}, //Number 2
			      {1, 1, 1, 1, 0, 0, 1}, //Number 3
			      {0, 1, 1, 0, 0, 1, 1}, //Number 4
			      {1, 0, 1, 1, 0, 1, 1}, //Number 5
			      {1, 0, 1, 1, 1, 1, 1}, //Number 6
			      {1, 1, 1, 0, 0, 0, 0}, //Number 7
			      {1, 1, 1, 1, 1, 1, 1}, //Number 8
			      {1, 1, 1, 1, 0, 1, 1}}; //Number 9

void checker(int size, char arr[]);
void printer(int num, int rank);
int  read_number(char arr[]);

int main()
{
	int size;
	char arr[10];

	printf("Enter a digits max 10: ");
	size = read_number(arr);
	
	checker(size, arr);

	return 0;
}

int read_number(char arr[])
{
	char c;
	int count = 0;
	while((c = getchar()) != '\n'){
		if((c >= '0' && c <= '9') && count < 10)
			arr[count++] = c;
	}
	return count;
}

void checker(int size, char arr[])
{
	for(int i = 0; i < size; i++){
		printer(arr[i] - '0', 0);
		printf("\t");
	}

	printf("\n");

	for(int i = 0; i < size; i++){
		printer(arr[i] - '0', 1);
		printf("\t");
	}

	printf("\n");

	for(int i = 0;i < size; i++){
		printer(arr[i] - '0', 2);
		printf("\t");
	}

	printf("\n");
}

void printer(int num, int rank)
{
	if(rank == 0){
		if(segement[num][0])
			printf(" _");
		else
			printf(" ");
	}

	if(rank == 1){
		if(segement[num][5])
			printf("|");
		else
			printf(" ");

		if(segement[num][6])
			printf("_");
		else
			printf(" ");

		if(segement[num][1])
			printf("|");
		else
			printf(" ");
	}
	
	if(rank == 2){
		if(segement[num][4])
			printf("|");
		else
			printf(" ");

		if(segement[num][3])
			printf("_");
		else
			printf(" ");

		if(segement[num][2])
			printf("|");
		else
			printf(" ");
	}
}
