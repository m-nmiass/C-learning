char *ft_strdup(const char *str)
{
	char *dup = malloc(strlen(str) + 1);
	for(int i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return dup;
}
