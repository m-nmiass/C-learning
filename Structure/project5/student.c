#include "student.h"

students rank[MAX_STUDENT];

void print_rank()
{
	bool check[MAX_STUDENT] = {false};
	int i = 0;
	int count = 0;
	int j = 1;

	printf("Rank\tstudent\taverage\n");
	for(; count < MAX_STUDENT; count++){
		for(; j < MAX_STUDENT; j++){
			if((rank[j].average > rank[i].average) && !check[j])
				i = j;
		}
		printf("%d\t%s\t:\t%g\n", count+1, rank[i].name, rank[i].average);
		check[i] = true;
		j = 1;
		i = 0;
	}
}

void average_calculates()
{
	for(int i = 0; i < MAX_STUDENT; i++){
		rank[i].average = rank[i].grade1 + rank[i].grade2 + rank[i].grade3;
		rank[i].average /= 3;
	}
}

void print_information(int i)
{
	printf("student\tgrade1\tgrade2\tgrade3\taverage\n");
	printf("%s\t\t%g\t%g\t%g\t%g\n", rank[i].name, rank[i].grade1, rank[i].grade2, rank[i].grade3, rank[i].average);
}

void print_informations()
{
	printf("students\tgrade1\tgrade2\tgrade3\taverage\n");
	for(int i = 0; i < MAX_STUDENT; i++){
		printf("%s\t\t%g\t%g\t%g\t%g\n", rank[i].name, rank[i].grade1, rank[i].grade2, rank[i].grade3, rank[i].average);
	}
}

void read_name(int i)
{
	char ch;
	int j = 0;
	while((ch = getchar()) != '\n')
		if(j < MAX_NAME)
			rank[i].name[j++] = ch;
	rank[i].name[j] = '\0';
}

void read_informations()
{
	for(int i = 0; i < MAX_STUDENT; i++){
		printf("Enter the student name : ");
		read_name(i);
		printf("Enter the first grade : ");
		scanf("%f", &rank[i].grade1);
		printf("Enter the second grade : ");
		scanf("%f", &rank[i].grade2);
		printf("Enter the third grade : ");
		scanf("%f", &rank[i].grade3);
		getchar();
		printf("\n");
	}
}
