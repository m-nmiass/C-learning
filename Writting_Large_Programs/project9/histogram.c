#include"histogram.h"

int histo[26] = {0};

void read_line()
{
	char ch;
	while((ch = getchar()) != '\n') {
		if(is_char(ch)){
			ch = to_lower(ch);
			histo[ch - 'a']++;
		}
	}
}

char to_lower(char c)
{
	return (c >= 'a' ? c : c - 'a' + 'A');
}

bool is_char(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}

void display_histo()
{
	for(int i = 0; i < 26; i++){
		if(histo[i]){
			printf("%c : ", 'a' + i);
			for(int j = histo[i]; j > 0; j--)
				printf("*");
			printf("\n");
		}
	}
}
