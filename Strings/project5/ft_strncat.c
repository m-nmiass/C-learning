#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;

	return i ;
}

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return NULL ;

	if (n == 0)
		return s1 ;

	size_t i = ft_strlen(s1);
	size_t j = 0 ;

	while (s2[j] != '\0' && j < n)
		s1[i++] = s2[j++];

	while (j < n)
	{
		s1[i] = '\0';
		j++;
	}

	return s1;
}
