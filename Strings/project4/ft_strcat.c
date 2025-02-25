#include <stdio.h>

size_t ft_strlen(char *s1)
{
	size_t i = 0;
	while (s1[i] != '\0')
		i++;
	return i;
}


char *ft_strcat(char *s1, const char *s2)
{
	if (!s1 || !s2)
		return NULL ;

	size_t i = ft_strlen(s1);
	size_t j = 0;

	while (s2[j] != '\0')
	       s1[i++] = s2[j++];

	s1[i] = '\0';	

	return s1;
}	
