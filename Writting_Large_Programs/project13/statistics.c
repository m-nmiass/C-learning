#include<stdio.h>
#include"statistics.h"
#include<limits.h>

int sum = 0;
int max = INT_MIN;
int min = INT_MAX;

void read_line(int counter)
{
	int i ;
	while(counter) {
		scanf("%d", &i);
		sum += i;
		counter--;
		if(max < i) {
			max = i;
		}

		if(min > i) {
			min = i;
		}
	}
}

