#include <stdio.h>

size_t ft_strlen(const char *s1)
{
	size_t size = 0;
	while (*s1++ != '\0')
		size++;
	return size ;
}
