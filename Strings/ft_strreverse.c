char *ft_strreverse(int size, char *arr)
{
	char *p = arr;
	char temp ;
	for (int i = 0, j = size - 2 ; i < size/2 ; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return p;
}
