#include <stdio.h>
#include <stdbool.h>

bool segements[10][7] = {{1,1,1,1,1,1,0},
			 {0,1,1,0,0,0,0},
			 {1,1,0,1,1,0,1},
			 {1,1,1,1,0,0,1},
			 {0,1,1,0,0,1,1},
			 {1,0,1,1,0,1,1},
			 {1,0,1,1,1,1,1},
			 {1,1,1,0,0,0,0},
			 {1,1,1,1,1,1,1},
			 {1,1,1,1,0,1,1}};

char shapes[3][4] = {{' ','_',' ','\t'},
		     {'|','_','|','\t'},
		     {'|','_','|','\t'}};

void print_digits();

int main ()
{
		print_digits();
}

void print_digits()
{
	int i = 0 ;
	int j = 0 ;
	while (i < 3)
	{
		while (j < 4)
			printf ("%c", shapes[i][j++]);
		printf ("\n");
		j = 0 ;
		i++;
	}
}
