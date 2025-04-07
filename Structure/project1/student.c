#include<stdio.h>

#define MAX 30
void read_line(char *arr);

struct{
	char name[MAX];
	int grade[3];
}student1, student2;


int main()
{
	double average1 = 0.0;
	double average2 = 0.0;

	printf("Enter the first student information :\n");
	printf("Enter the name : ");
	read_line(&student1.name[0]);
	printf("Enter the grades : ");
	scanf("%d%d%d", &student1.grade[0], &student1.grade[1], &student1.grade[2]);
	getchar();

        printf("\nEnter the second student information :\n");
        printf("Enter the name : ");
        read_line(&student2.name[0]);
        printf("Enter the grades : ");
        scanf("%d%d%d", &student2.grade[0], &student2.grade[1], &student2.grade[2]);

	for(int i = 0; i < 3; i++){
		average1 += student1.grade[i];
		average2 += student2.grade[i];
	}

	average1 /= 3;
	average2 /= 3;

	printf("student : %s has %g\n", student1.name, average1);
	printf("student : %s has %g\n", student2.name, average2);
}

void read_line(char *arr)
{
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n')
		if(i < MAX - 1)
			arr[i++] = ch;
	arr[i] = '\0';
}

