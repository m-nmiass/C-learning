#include <stdio.h>

char *ft_strncpy(char *s1, const char *s2, int n)
{
	if (!s1 || !s2 || !n)
		return s1 ;

	size_t i = 0 ;

	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i] ;
		i++;
	}


	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}

	return s1 ;
}

