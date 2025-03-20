#include<stdio.h>
#include<string.h>

void string_tolower(char *s1);

int main(int argc, char **argv)
{
	char *planet[] = {"mercury", "venus", "earth", "jars", "jupiter", "saturn", "uranus", "neptune", "pluto"};

	int j, i;

	for(i = 1; i < argc; i++) {
		string_tolower(argv[i]);
		for(j = 0; j < 9; j++) {
			if((strcmp(planet[j], argv[i])) == 0) {
				printf ("%s is planet %d\n", planet[j], j + 1);
				break;
			}
		}
		if(j == 9)
			printf("%s is not a planet", argv[i]);
	}
}

void string_tolower(char *s1)
{
	while (*s1) {
		if (*s1 >= 'A' && *s1 <= 'Z')
			*s1 = *s1 - 'A' + 'a';
		s1++;
	}
}
