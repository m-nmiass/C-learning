#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

#define N 15

int arr[N];

void replace_element(int a, int b);
void remove_element(int a);
void search_element(int a);
void print_array();

int main()
{

	int choice ;
	int a ;
	int b ;
	printf ("Enter 15 integers : ");
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	while (1)
	{
		printf ("Fixed-Size Array Utility\n");
		printf ("1. Replace Element\n");
		printf ("2. Remove Element\n");
		printf ("3. Search Element\n");
		printf ("4. Print Array\n");
		printf ("5. Exit\n");
	
		printf ("Enter your choice : ");
		scanf ("%d", &choice);

		switch (choice)
		{
			case 1 : 
				printf ("Enter the element rank : ");
				scanf ("%d", &a);
				printf ("Enter the replacement : ");
				scanf ("%d", &b);
				replace_element(a, b);
				break ;

			case 2 :
				printf ("Enter the element rank : ");
				scanf ("%d", &a);
				remove_element(a);
				break ;

			case 3 :
				printf ("Enter the elemenet value : ");
				scanf ("%d", &a);
				search_element(a);
				break;

			case 4 :
				print_array();
				break;

			case 5 :
				return 0 ;

			default : printf ("Invalid choice try again .");
		}
	}
				
}
	
void print_array()
{
	printf ("Rank	");
	for(int i = 0; i < N; i++)
		printf ("%d	",i + 1);
	printf ("\n");
	printf ("Value	");
	for(int i = 0; i < N; i++)
		printf ("%d	",arr[i]);
	printf ("\n");
}

void remove_element(int a)
{
	for(int i = a - 1; i + 1< N; i++)
		arr[i] = arr[i + 1];
	arr[N - 1] = 0;

	printf ("The element of rank %d has been removed\n", a);
}

void search_element(int a)
{
	int i = 0 ;
	for(; i < N && arr[i] != a; i++);
	printf ("The element %d have the rank %d\n", a, i + 1);
}

void replace_element(int a, int b)
{
	arr[a - 1] = b ;
	printf ("The element %d is now %d\n", a, b);
}
