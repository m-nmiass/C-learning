#include<stdio.h>

#define SIZE 1000
#define false 0
#define true 1

double compute_average_word_length(char *sentence);
void read_sentence(char *sentence);

int main()
{
	char sentence[SIZE];
	double average ;

	printf("Enter the sentence : ");
	read_sentence(sentence);

	average = compute_average_word_length(sentence);
	printf("The average is %g", average);

	return 0;
}

double compute_average_word_length(char *sentence)
{
	double average = 0;
	int words = 1;
	int letters = 0;
	char ch;
	int is_word = false;

	for(int i = 0; sentence[i]; i++) {
		ch = sentence[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch == '.' || ch == '!' || ch == ',')) {
			letters++;
			is_word = false;
		}
		if(ch == ' ' || ch == '\t') {
			if(!is_word) {
				is_word = true;
				words++;
			}
		}
	}

	average = (double)letters / words;

	return average;
}

void read_sentence(char *sentence)
{
	char ch;
	int i = 0;

	while((ch = getchar()) == ' ' || ch == '\t');

	sentence[i++] = ch;
	while((ch = getchar()) != '\n')
		if(i < SIZE)
			sentence[i++] = ch;

	sentence[i] = '\0';
}
