#include<stdio.h>

int ft_strlen(char *str);

int main(int argc, char **argv)
{
	int longest = 0;
	int size = 0;
	int check ;
	for(int i = 0; i < argc; i++) {
		check = ft_strlen(argv[i]);
		if(check > size) {
			size = check;
			longest = i;
		}
	}

	printf ("The longest argument is  \"%s\" with the size %d", argv[longest], size);
}

int ft_strlen(char *str)
{
	char *p = str;
	while(*str++);
	return (str - p) - 1 ;
}
