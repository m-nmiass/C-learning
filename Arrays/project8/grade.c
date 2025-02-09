#include <stdio.h>

#define STUDENT 5
#define GRADE 5

int main ()
{
	float a[STUDENT][GRADE] ;

	int i = 0 ;
	int j = 0 ;
	float average_student, average_quiz, total_score, high_score, low_score ;


	while (i < STUDENT)
	{
		printf ("Enter row %d : ", i + 1);
		while (j < GRADE)
			scanf ("%f", &a[i][j]), j++ ;
		j = 0 ;
		i++ ;
	}

	i = 0 ;
	j = 0 ;
	total_score = 0 ;

	while (i < STUDENT)
	{
		while (j < GRADE)
			total_score += a[i][j], j++ ;
		j = 0 ;
		average_student = total_score/STUDENT ;
		printf ("total score of the student (%d) is %g and the average score is %g\n", i+1, total_score, average_student );
		i++ ;
	}

	i = 0 ;
	j = 0 ;
	total_score = 0 ;
	high_score = a[0][0];
        low_score = a[0][0];	
	while (j < GRADE)
	{
		while (i < STUDENT)
		{
			total_score += a[i][j] ;
			if (a[i][j] > high_score)
				high_score = a[i][j] ;
			if (a[i][j] < low_score)
				low_score = a[i][j] ;
			i++ ;
		}
		average_quiz = total_score/GRADE ;
		printf ("total score of the quiz (%d) is %g and the average score os %g\n", i+1, total_score, average_quiz );
		i = 0 ;
		j++ ;
	}
	printf ( "The high scor is %g and lowest score is %g", high_score, low_score );
}
