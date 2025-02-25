char *ft_strncpy(char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return NULL;
	if (n == 0)
		return s1;

	size_t i = 0 ;
	
	while (s2[i] != '\0' && i < n)
	{
		s1[i] = s2[i];
		i++;
	}

	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return s1;
}
