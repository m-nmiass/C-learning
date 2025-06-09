#include<stdio.h>
#include<stdbool.h>

int main()
{
	int word = 0;
	bool isword = false;
	char c;
	
	printf("Enter the sentence : ");

	while((c = getchar()) != '\n'){
		if((c == ' ' || c == '\t') && isword){
			word++;
			isword = false;
		}
		else
			isword = true;
	}
	word++;

	printf("Number of words is : %d", word);

	return 0;
}
