#include <stdio.h>

char *ft_strncpy(char *s1, const char *s2, int n)
{
	if (!s1 || !s2)
		return NULL ;

	char *temp = s1 ;
	while ((*s1++ = *s2++) != '\0' && n)
		n--;

	while (n)
	{
		*s1++ = '\0';
		n--;
	}

	return temp ;
}
