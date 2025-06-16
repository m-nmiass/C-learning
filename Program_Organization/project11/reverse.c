#include<stdio.h>
#include<stdbool.h>

#define SIZE 100

int top = 0;
int stack[SIZE];

bool is_empty();
bool is_full(int size);
void push(int i);
int pop();
void read_array(int size, int arr[]);
void reverse_arr(int size, int arr[]);
void print_arr(int size, int arr[]);

int main()
{
	int size;
	int arr[size];

	printf("Enter the array size less then %d : ", SIZE);
	do{
		scanf("%d", &size);
		if(size <= 0 || size > 100)
			printf("Invalid input try again : ");
	}while(size <= 0 || size > 100);

	printf("Enter the array : ");
	read_array(size, arr);

	reverse_arr(size, arr);

	print_arr(size, arr);

	return 0;
}

bool is_empty()
{
	return top == 0;
}

bool is_full(int size)
{
	return top == size;
}

void push(int i)
{
	stack[top++] = i;
}

int pop()
{
	return stack[--top];
}

void reverse_arr(int size, int arr[])
{
	for(int i = 0; i < size; i++){
		push(arr[i]);
	}
	for(int i = 0; i < size; i++)
		arr[i] = pop();
}

void print_arr(int size, int arr[])
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

void read_array(int size, int arr[])
{
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}
