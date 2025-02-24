#include <stdio.h>

char *ft_strcpy (char *s1, const char *s2)
{
	char *temp = s1;

	if (!s1 || !s2)
		return NULL;

	while ((*s1++ = *s2++) != '\0');

	return temp;
}
