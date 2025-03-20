#include<stdio.h>
#include<stdbool.h>

bool ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[])
{
	char *planet[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
	int i, j ;
	for(i = 1; i < argc; i++) {
		for(j = 0; j < 9; j++) {
			if (ft_strcmp(argv[i], planet[j])) {
				printf ("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		}
		if(j == 9)
			printf("%s is not a planet\n", argv[i]);
	}
}

bool ft_strcmp(char *s1, char *s2)
{
	while(*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return (*s1 == '\0' && *s2 == '\0'); 
}
