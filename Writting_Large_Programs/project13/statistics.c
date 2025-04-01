#include<stdio.h>

int sum = 0;
int max = INT_MIN;
int min = INT_MAX;

void read_line()
{
	char ch;
	int i;
	while(1) {
		if((scanf("%d", &i)) == 1) {
			sum += i;
			if(max < i)
				max = i;
			if(min > i)
				min = i;
		}
		else {
			ch = getchar();
			if(ch == '\n')
				break;
		}
	}
}
