char * ft_strrchr(char *str, char c)
{
	if(c == '\0')
		return str + strlen(str);

	for(int i = strlen(str) - 1; i >= 0; i--){
		if(str[i] == c)
			return str + i;
	}

	return NULL;
}
