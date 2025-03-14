#include<stdio.h>
#include<stdbool.h>

#define NUM_WORDS 100
#define NUM_CHAR 100

void read_string(char (*arr)[NUM_CHAR]);
void swap_string(char (*arr)[NUM_CHAR], char (*brr)[NUM_CHAR]);
int ft_strcmp(char (*arr)[NUM_CHAR], char (*brr)[NUM_CHAR]);
void ft_swap(char *a, char *b);

int main()
{
	char arr[NUM_WORDS][NUM_CHAR];
	int words ;

	printf("Enter the number of characters up to %d : ", NUM_WORDS);
	scanf("%d", &words);
	getchar();

	printf("All words cant be larger then %d characters \n", NUM_CHAR);

	for(int i = 0; i < words; i++) {
		printf("Enter the string N° %d : ", i + 1);
		read_string(&arr[i]);
	}
	
	for(int i = 0; i < words; i++) {
		for(int j = i + 1; j < words; j++) {
			if (ft_strcmp(&arr[i], &arr[j]) > 0)
				swap_string(&arr[i], &arr[j]);
		}
	}

	for(int i = 0; i < words; i++) {
		printf("%s\n", &arr[i]);
	}
}

void read_string(char (*arr)[NUM_CHAR])
{
	int i = 0;
	char c ;
	while ((c = getchar()) != '\n') {
		if(i < NUM_CHAR - 1)
			(*arr)[i] = c;
		i++;
	}
	(*arr)[i] = '\0';
}

void ft_swap(char *arr, char *brr)
{
	for(int i = 0; arr[i] != '\0' || brr[i] != '\0'; i++)
		arr[i] = brr[i];
}

void swap_string(char (*arr)[NUM_CHAR], char (*brr)[NUM_CHAR])
{
	char temp[NUM_CHAR];
	ft_swap(temp, *arr);
	ft_swap(*arr, *brr);
	ft_swap(*brr, temp);
}

int ft_strcmp(char (*arr)[NUM_CHAR], char (*brr)[NUM_CHAR])
{
	int i = 0;
	while((*arr)[i] == (*brr)[i])
		i++;
	return((*arr)[i] - (*brr)[i]);
}
