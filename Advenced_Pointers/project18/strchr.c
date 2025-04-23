char *strchr(const char *str, char c)
{
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == c)
			return str + i;
	}
	return NULL;
}
